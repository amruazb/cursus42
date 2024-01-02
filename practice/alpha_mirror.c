#include <unistd.h>

void repeat_alpha(char *str)
{
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str = 'z' - (*str - 'a');
		else if (*str >- 'A' && *str <= 'Z')
			*str = 'Z' - (*str - 'A');
		write(1, str++, 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
}

