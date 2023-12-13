/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:40:18 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/29 08:49:01 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_print_hex(unsigned long long int num, int uppercase);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int num);
int		ft_putunsignbr(unsigned int num);
int		ft_printptr(unsigned long long ptr);

#endif