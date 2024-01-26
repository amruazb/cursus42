#include "minitalk.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int					negative;

	num = 0;
	negative = 1;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * negative);
}
// int	ft_atoi(const char *str)
// {
// 	u	result;
// 	int				sign;

// 	result = 0;
// 	sign = 1;
// 	i = 0;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	if (str[i] == '-' || str[i] == '+') 
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9') 
// 	{
// 		result = result * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	if (result > 2147483647 && sign == 1)
// 		return (-1);
// 	if (result > 2147483648 && sign == -1)
// 		return (0);
// 	return (result * sign);
// }

void	ft_putnbr(int n)
{
	long	lng;

	lng = n;
	if (lng > 9)
	{
		ft_putnbr (lng / 10);
		ft_putnbr (lng % 10);
	}
	ft_putchar(lng + '0');
}

void	ft_putstr(char *s)
{
	while(*s)
		write(1, s++, 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
