/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:00:44 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/18 13:01:15 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_print_hex(unsigned long num, int uppercase);
int		ft_printf(const char *format, ...);
size_t	ft_strlen(char *str);
int     ft_putchar(char c);
int 	ft_putstr(const char *str);
void	ft_putnbr(int num);
void	ft_putunsignbr(unsigned int num);
void	ft_printptr(va_list args);

#endif