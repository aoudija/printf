/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:52:48 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/16 12:24:22 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	    ft_printf(const char *s, ...);
int	    ft_putnbr(int n);
int	    ft_putchar(char c);
int	    ft_putstr(const char *s);
int	    ft_putnbr_hex(unsigned long n, char *tab);
int	    ft_optimize(va_list args, char c);
int     ft_ptnbr_u(unsigned int nb);
char    *ft_itoa(int n);

#endif