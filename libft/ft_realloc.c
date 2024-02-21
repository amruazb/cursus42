/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 08:29:57 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/02 09:06:09 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_realloc(void *ptr, size_t newsize)
{
	char	*newptr;
	size_t	cursize;

	if (ptr == 0)
		return (malloc(newsize));
	cursize = sizeof(ptr);
	if (newsize <= cursize)
		return (ptr);
	newptr = malloc(newsize);
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
        return malloc(newsize);
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
}
