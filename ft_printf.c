/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:41:12 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/13 16:04:25 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <string.h>
int ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		j;

	va_start(args, s);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if(s[i + 1] == 'i' || s[i + 1] == 'd')
			{
				j += ft_putnbr(va_arg(args, int));
				i++;
			}
			if(s[i + 1] == 'x')
			{
				j += ft_putnbr(va_arg(args, int));
				i++;
			}
			else if(s[i + 1] == 'c')
			{
				j += ft_putchar(va_arg(args, int));
				i++;
			}
			else if(s[i + 1] == 's')
			{
				j += ft_putstr(va_arg(args, char *));
				i++;
			}
			else
				j+= ft_putchar('%');
		}
		else
			j += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (j);
}
