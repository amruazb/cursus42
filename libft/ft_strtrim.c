/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:35:33 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 09:17:11 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*start;
	char	*end;
	int		len;
	int		i;

	start = (char *)s1;
	while (*start && ft_strchr(set, *start)) 
		start++;
	end = (char *)s1 + strlen(s1) - 1;
	while (end >= start && ft_strchr(set, *end))
		end--;
	len = end - start + 2;
	trimmed = malloc(len * sizeof(char));
	if (trimmed == NULL) 
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trimmed[i++] = *start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/* int main(void)
{
    char input[100];
    char *trimmed;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (input[ft_strlen(input) - 1] == '\n')
        input[ft_strlen(input) - 1] = '\0';

    trimmed = ft_strtrim(input, " \t\r\n");
    if (trimmed != NULL)
    {
        printf("Trimmed string: %s\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */

/* int main(void) {
    // Test 1: Trim characters from the start and end
    char *input1 = "   Hello, world!   ";
    char *set1 = " ";
    char *result1 = ft_strtrim(input1, set1);
    printf("Test 1: Trim characters from the start and end\n");
    printf("Original: \"%s\"\n", input1);
    printf("Trimmed: \"%s\"\n\n", result1);
    free(result1);

    // Test 2: No characters to trim
    char *input2 = "Hello, world!";
    char *set2 = "xyz";
    char *result2 = ft_strtrim(input2, set2);
    printf("Test 2: No characters to trim\n");
    printf("Original: \"%s\"\n", input2);
    printf("Trimmed: \"%s\"\n\n", result2);
    free(result2);

    // Test 3: Entire string to trim
    char *input3 = "abcdefg";
    char *set3 = "abcdefg";
    char *result3 = ft_strtrim(input3, set3);
    printf("Test 3: Entire string to trim\n");
    printf("Original: \"%s\"\n", input3);
    printf("Trimmed: \"%s\"\n\n", result3);
    free(result3);

    // Test 4: Empty input string
    char *input4 = "";
    char *set4 = "xyz";
    char *result4 = ft_strtrim(input4, set4);
    printf("Test 4: Empty input string\n");
    printf("Original: \"%s\"\n", input4);
    printf("Trimmed: \"%s\"\n\n", result4);
    free(result4);

    return 0;
} */
