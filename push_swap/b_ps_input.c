#include "push_swap.h"


char **ps_split(char *s)
{
	int i;
	char **split;
	char *current;

	i = 0;
	split = malloc(501);
	if (!split)
		return (NULL);
	while (*s == ' ' && *s++)
		;
	while (*s)
	{
		split[i] = malloc(1024);
		if (!split[i])
			return (NULL);
		current = split[i++];
		while (*s != ' ' && *s)
			*current++ = *s++;
		while (*s == ' ' && *s++)
			;
		*current = '\0';
	}
	split[i] = NULL;
	return (split);
}

int is_zero(int p_ati, char *w)
{
	int z;
	z = 0;
	if (p_ati == 0)
	{
		while (w[z])
		{
			if ((w[z] == '-' || w[z] == '+') && (w[z + 1] && w[z + 1] >= '0' && w[z + 1] <= '9'))
				z++;
			while (w[z] == '0')
				z++;
			if (w[z])
				return (1);
		}
		return (0);
	}
	return (0);
}



int ps_atoi(const char *l)
{
	long long num;
	int			n;

	num = 0;
	n = 1;
	while (*l == ' ' || (*l >= 9 && *l <= 13))
		l++;
	if ((*l == '+' || *l == '-') && (*(l + 1) && *(l + 1) >= '0' && *(l + 1) <= '9'))
	{
		if (*l == '-')
			n *= -1;
		l++;
	}
	while (*l >= '0' && *l <= '9')
	{
		num = num * 10 + *l - '0';
		if ((n == -1 && num * n < INT_MIN) || (n == 1 && n > INT_MAX))
			return (0);
		l++;
	}
	if ((*l && *l < '0') || (*l && *l > '9'))
		return (0);
	return (num * n);
}

void ft_putstr(char *c)
{
	while(*c)
		write(1,c++,1);
}

/*int main()
{
	t_list* head = NULL;
	t_list* ptr;

	head = createlist(head);

	ptr = head;
	while (ptr)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}

}*/

