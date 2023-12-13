/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 07:40:45 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/12 08:55:01 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int main()
// {
// 	int fd = open("sample.txt", O_RDONLY);
// 	char *line = get_next_line(fd);
// 	printf("Test case 1 first line : %s\n", line);
// 	free(line);
// 	// line = get_next_line(fd);
// 	// printf("")
// }

// int main() {
//     int fd = open("sample.txt", O_RDONLY);

//     if (fd == -1) {
//         perror("Error opening file");
//         return 1;
//     }

//     char *remainder = NULL;
//     remainder = read_file(fd, remainder);

//     // Print the contents read from the file
//     if (remainder != NULL) {
//         printf("Contents read from file:\n%s\n", remainder);
//         free(remainder);
//     } else {
//         printf("No contents read from the file.\n");
//     }

//     close(fd);

//     return 0;
// }
