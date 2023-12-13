read_line function:
| Line Number | Code                                                | Explanation                                                                                     |
|-------------|-----------------------------------------------------|-------------------------------------------------------------------------------------------------|
| 61          | `buffer = (char *)malloc(BUFFER_SIZE + 1);`        | Allocates memory for a buffer to read data from the file.                                        |
| 62-63       | Input Validation                                    | Returns `NULL` if buffer allocation fails.                                                      |
| 64          | `remainder = read_buffer(fd, &read_bytes, remainder, buffer);` | Calls `read_buffer` to update the `remainder` with data from the file.                        |
| 65          | Returns `remainder`.                                | Returns the updated `remainder` after reading data from the file.                                |
read_buffer function:
| Line Number | Code                                                        | Explanation                                                                                     |
|-------------|-------------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| 16-28       | Reads data from the file into `buffer` using `read`.        | Continues reading until a newline is found or the end of the file is reached.                  |
| 30          | Returns `remainder`.                                        | Returns the updated `remainder` after appending the read data to it.                            |
new_line(function):
| Line Number | Code                                            | Explanation                                                                             |
|-------------|-------------------------------------------------|-----------------------------------------------------------------------------------------|
| 52-55       | Allocates memory for the new line.               | The size is determined by the length of the line up to the newline character.           |
| 56-62       | Copies the line from `remainder` to the new line. | Handles the case where the line ends with a newline character.                            |
| 63          | Returns `line`.                                  | Returns the newly created line.                                                         |
get_rest_function:
| Line Number | Code                                      | Explanation                                                                     |
|-------------|-------------------------------------------|---------------------------------------------------------------------------------|
| 69-75       | Finds the position after the newline.      | Determines where the remaining part of `remainder` starts after the newline.    |
| 76-82       | Copies the remaining part to a new string. | Allocates memory and copies the remaining part of `remainder` to a new string.  |
| 83          | Returns `get_str`.                         | Returns the new string, which is the remaining part after the newline character. |
First Call to get_next_line:

read_line is called, updating the remainder for the specified file descriptor (fd).
new_line extracts the current line from the remainder and returns it.
The remainder is then updated using get_rest to exclude the processed part.
Subsequent Calls to get_next_line:

read_line continues to update the remainder for the same file descriptor (fd).
new_line extracts the next line from the updated remainder and returns it.
The remainder is again updated using get_rest to exclude the processed part.
This process continues for each subsequent call, providing the next line on each invocation.
Handling End of File:

If the end of the file is reached, read_line might still update the remainder to 
include the remaining part after the last newline character.
In subsequent calls, when new_line finds no newline character in the remainder,
it returns NULL.
This signals the end of the file, and the caller can use this information to stop 
further calls to get_next_line.
In summary, the remainder is updated and maintained within the function itself, and
 the extracted line is returned on each call. The get_str returned by get_rest contains
  the remaining part of the remainder after the newline character and is used in subsequent calls.