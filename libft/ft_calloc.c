/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:01 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/14 08:22:40 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tlen;
	void	*ptr;

	tlen = count * size;
	ptr = malloc(tlen);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tlen);
	return (ptr);
}

/* int main(int ac, char *av[]) 
{
    if (ac < 3) 
	{
        printf("Usage: %s <num_elements> <element_size>\n", av[0]);
        return 1;
    }

    size_t num_elements = (size_t)ft_atoi(av[1]);
    size_t element_size = (size_t)ft_atoi(av[2]); 

    if (element_size != sizeof(int))
	 {
        printf("Element size must be sizeof(int)\n");
        return 1;
    }
    int *myArray = ft_calloc(num_elements,element_size);
    if (myArray == NULL) 
	{
        return 1;
    }
	int i = 0;
    while(i < num_elements)
	{
        myArray[i] = i;
		i++;
    }
	i = 0;
    while( i < num_elements)
	{
        printf("%d ", myArray[i]);
		i++;	
    }
    printf("\n");
    free(myArray);

    return 0;
} */
