#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <signal.h>

void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void    ft_ser(int sig);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		checker(int ac, char **av);
void    killuser(char *message, int pid);

#endif