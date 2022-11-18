/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:16:13 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/18 16:25:10 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_optimize(va_list args, char c)
{
	int	j;

	j = 0;
	if (c == 'i' || c == 'd')
		j = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		j = ft_ptnbr_u(va_arg(args, unsigned int));
	else if (c == 'x')
		j = ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		j = ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
			j += ft_putstr("0x");
			j += ft_put_p(va_arg(args, unsigned long));
	}
	else if (c == 'c')
		j = ft_putchar(va_arg(args, int));
	else if (c == 's')
		j = ft_putstr(va_arg(args, char *));
	else if (c == '%')
		j = ft_putchar('%');
	else
		j = ft_putchar(c);
	return (j);
}
