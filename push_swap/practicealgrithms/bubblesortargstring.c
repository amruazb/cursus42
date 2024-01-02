#include <stdio.h>

void swap(char **s, int i)
{
	char *temp = s[i];
    s[i] = s[i + 1];
    s[i + 1] = temp;
}

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return s1[i] - s2[i];
}

void bubblesort(char **s, int n)
{
	int i, j;
	i = 0;
	while(i < n - 1)
	{
		j = 0;
		while(j < n - i - 1)
		{
			if(ft_strcmp(s[j], s[j + 1]) > 0)
			{
				printf("before swap 1 - %s\n", s[j]);
				printf("before swp 2 - %s \n", s[j+1]);
				swap(s,j);
				printf("swap 1 - %s\n", s[j]);
				printf("swp 2 - %s \n", s[j+1]);
			}
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac < 2)
		return printf("usage %s <word> <word> ....wordN\n",av[0]);
	int n = ac - 1;
	char *s[n];
	int i = 1;
	while(i <= n)
	{
		s[i - 1] = av[i];
		i++;
	}

	printf("original string");
	i = 0;
	while(i < n)
		printf("%s ", s[i++]);
	printf("\nsorted\n");
	i = 0;
	bubblesort(s,n);
	while(i < n)
		printf("%s ", s[i++]);
}


		

