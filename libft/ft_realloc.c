/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 08:29:57 by aabashee          #+#    #+#             */
/*   Updated: 2024/02/21 11:08:25 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_realloc(void *ptr, size_t newsize)
=======
/* void	*ft_realloc(void *ptr, size_t newsize)
>>>>>>> 4650a4e032a7c714976197d74347c8e12e17c3b4
{
	char	*newptr;
	size_t	cursize;

	if (ptr == 0)
		return (malloc(newsize));
	cursize = sizeof(ptr);
	if (newsize <= cursize)
		return (ptr);
	newptr = malloc(newsize);
<<<<<<< HEAD
	ft_memcpy(ptr, newptr, cursize);
	free(ptr);
	return (newptr);
=======
	ft_memcpy(ptr, newptr, cursize);//using ft_memcpy
	free(ptr);
	return (newptr);
} */
//without ft_memcpy
void *ft_realloc(void *ptr, size_t newsize)
{
	char *newptr;
	size_t cursize;
	if (ptr == NULL)
	return (malloc(newsize));
	cursize = sizeof(ptr);
	if (newsize <= cursize)
	return ptr;
	newptr = malloc(newsize);
	// Copy memory byte by byte
	size_t i = 0;
	while(i < cursize)
	{
	((char *)newptr)[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return newptr;
>>>>>>> 4650a4e032a7c714976197d74347c8e12e17c3b4
}
// size_t ft_realloc(void **buffer, size_t old_size)
// {
// 	void *new_buffer;
// 	size_t new_size;

// 	new_size = old_size * 2;
// 	new_buffer = malloc(new_size);
// 	if (new_buffer == NULL)
// 	{
// 		return (0);
// 	}
// 	if (*buffer)
// 	{
// 		char *old_buffer = *buffer;
// 		char *new_buffer = new_buffer;
// 		size_t i= 0;
// 		while (i < old_size)
// 		{
// 			new_buffer[i] = old_buffer[i];
// 			i++;
// 		}
// 		free(old_buffer);
// 	}
// 	*buffer = new_buffer;
// 	return (new_size);
// }









































		SS_DISABLE