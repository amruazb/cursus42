#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("letter.txt", O_RDONLY);
	if (fd == -1) {
		perror("Error opening file");
		return 1;
	}

	char line[100]; // Assuming a maximum line length of 100 characters

	ssize_t bytesRead = read(fd, line, sizeof(line) - 1);
	if (bytesRead == -1) {
		perror("Error reading file");
		close(fd);
		return 1;
	}

	line[bytesRead] = '\0'; // Null-terminate the line

	close(fd);

	printf("%s\n", line);

	return 0;
}