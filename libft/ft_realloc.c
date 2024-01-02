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

void	*ft_realloc(void *ptr, size_t new_size, size_t old_size)
{
	void	*tmp;

	if (!ptr)
		return ((void *)malloc(old_size));
	tmp = (void *)malloc(old_size);
	if (!tmp)
		return (NULL);
	ft_memmove(tmp, ptr, new_size);
	free(ptr);
	ptr = ((void *)malloc(old_size));
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, tmp, old_size);
	free(tmp);
	return (ptr);
}
