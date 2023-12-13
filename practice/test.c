// #include "get_next_line.h"

// // Function to get the next line from a file descriptor using pointer-based operations
// char *get_next_line(int fd) {
//     static char buffer[BS + 1];
//     char *line = ft_strdup(""); // Initialize line with an empty string

//     if (fd < 0 || BS <= 0 || !line)
//         return NULL;

//     ssize_t read_bytes;
//     char *newline_pos;
//     char *tmp;

//     newline_pos = ft_strchr(buffer, '\n');

//     while (newline_pos == NULL && (read_bytes = read(fd, buffer, BS)) > 0) {
//         buffer[read_bytes] = '\0';
//         tmp = ft_strjoin(line, buffer);
//         free(line);
//         line = tmp;
//         newline_pos = ft_strchr(buffer, '\n');
//     }

//     if (read_bytes < 0) {
//         free(line);
//         return NULL;
//     }

//     return line;
// }


// int main() 
// {
//     int fd = open("sample.txt", 0);
//     char *line = get_next_line(fd);
//     printf("Test case 1: %s\n", line);
//     free(line);

//     // int invalid_fd = -1;
//     // char *invalid_line = get_next_line(invalid_fd);
//     // printf("Test case 2; %s\n");
//     // if (invalid_line == NULL)
//     //     printf("NULL\n");
//     // else
//     //     printf("Error\n");
// }