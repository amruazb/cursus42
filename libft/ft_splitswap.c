#include "libft.h"

static int count_words(char *s, char c)
{
	int count;
	bool delim;

	count = 0;
	while (*s)
	{
		delim = false;
		while (*s == c)
			++s;
		while (*s != c && *s)
		{
			if (!delim)
			{
				++count;
				delim = true;
			}
			++s;
		}
	}
	return (count);
}


static char *get_next(char *s, char c)
{
	static int remainder = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while(s[remainder] == c)
		++remainder;
	whiile ((s[remainder + len] != c) && s[cursor + len])
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[remainder] != c) && s[remainder])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}



char **split(char *s, char c)
{
	int		words_count;
	char	**splitted;
	int		i;

	i = 0;
	words_count = count_words(s,c);
	if(!words_count)
		exit(1);
	splitted = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!splitted)
		return (NULL);
	while (words_count-- >= 0)
	{
		 if (i == 0)
		 {
			 splitted[i] = malloc(sizeof(char));
			 if(!splitted[i])
				 return (NULL);
			 splitted[i++][0] = '\0';
			 continue ;
		 }
		 splitted[i++] = get_next(s, c);
	}
	splitted[i] = NULL;
	return (splitted);
}


