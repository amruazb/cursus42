#include "libftprintf.h"

int ft_putcha(char c)
{
	return (write(1, &c, 1));
}


