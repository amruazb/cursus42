size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while(s && s[i])
        i++;
    return (i);
}


char    *ft_strjoin(char const *s1, char const *s2)
{
    char *ps1;
    char *ptr;
    int tlen;

    if (!s1 && !s2)
            return (0);
    tlen = ft_strlen(s1) + ft_strlen(s2);
    ps1 = malloc(sizeof(char) * (tlen + 1));
    if (!ps1)
        return (NULL);
    ptr = ps1;
    if (s1)
        while (*s1)
            *ptr++ = *s1++;
    if (s2)
        while (*s2)
            *ptr++ = *s2++;
    *ptr = '\0';
    return (ps1);
}

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (0);
    while (*s != (char)c)
        if (!*s++)
            return (0);
    return ((char *)s);
}

char *get_line(char *line)
{
    int i;
    char *buffer;

    i = 0;
    while (line[i] != '\n' && line[i])
        i++;
    buffer = malloc(i + 1);
    if(!line[i])
        return (NULL);
   i = 0;
    while (line[i] != '\n')
    {
        buffer[i] = line[i];
        i++;
    }
    buffer[i] = '\0';
    free(line);
    return (buffer);
}

char *get_next_line(int fd)
{
    int bytes_read;
    char *line;
    char *buffer;
    char *line_proccessed;


    bytes_read = -1;
    line = NULL;
    while(!ft_strchr(line, '\n') && bytes_read)
    {
        buffer = malloc(1024);
        if(!buffer)
            return (NULL);
        bytes_read = read(fd, buffer, 1);
        buffer[bytes_read] = '\0';
        if (bytes_read == 0)
            return (free(buffer),line);
        line = ft_strjoin(line, buffer);
        if (!line)
            return (NULL);
    }
    line_proccessed = get_line(line);
    if(line_proccessed)
        return (line_proccessed);
    else
        return (line);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("Makefile", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
		{
			free(line);
			break ;
		}
		printf("%s", line);
		free(line);
	}
}}
