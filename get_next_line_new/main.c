#include "get_next_line.h"
#include "get_next_line_bonus.h"

// int main()
// {
// 	int fd;
// 	fd = open("bruh.txt", O_RDONLY);
// 	char *line = get_next_line(fd);
// 	while(*line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	close(fd);
// 	// printf("Test case 1: %s", line);
// 	// free(line);
// 	// line = get_next_line(fd);
// 	// printf("second line first file %s", line);
// 	// free(line);
// 	// line = get_next_line(fd);
// 	// printf("third line first file: %s",line);
// 	// free(line);
// 	// line = get_next_line(fd);
// 	// printf("second line first file %s", line);
// 	// free(line);
// 	// line = get_next_line(fd);
// 	// printf("third line first file: %s",line);
// 	// free(line);
// 	// close(fd);
// 	// int fd1 = open("sampl.txt", O_RDONLY);
// 	// line = get_next_line(fd1);
// 	// printf("test case 2: %s\n", line);
// 	// free(line);
// 	// line = get_next_line(fd1);
// 	// printf("second line file 2: %s\n", line);
// 	// free(line);
// 	// close(fd1);
// 	// int fd2 = open("empty.txt", O_RDONLY);
// 	// line = get_next_line(fd2);
// 	// if (line == NULL)
// 	// 	printf("file is empty\n");
// 	// else 
// 	// 	printf("first line is:%s \n", line);
// 	// free(line);
// 	// close(fd2);
//  }

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int		fd;
	char	*line;

	// Open a file for reading
	fd = open("bruh.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}

	// Read lines using get_next_line until the end of the file
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line: %s\n", line);
		free(line); // Remember to free the allocated memory for each line
	}

	// Close the file
	close(fd);

	return (0);
}
