static char *get_next(char *s, char c)
{
	static int cur


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


