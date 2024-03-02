/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:01 by aabashee          #+#    #+#             */
/*   Updated: 2024/02/12 02:14:24 by aabashee         ###   ########.fr       */
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



// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	char	*ptr;
// 	int		i;
// 	int		len;

// 	if (nmemb * size > 2147483647 || nmemb > 2147483647
// 		|| size > 2147483647)
// 		return (0);
// 	len = nmemb * size;
// 	i = 0;
// 	ptr = malloc(len);
// 	if (!ptr)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }
	// if (size && (count > UINT32_MAX / size))
	// 	return (NULL);
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
