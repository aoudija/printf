/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:07:48 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/18 10:28:51 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_p(unsigned long long n)
{
	char	*tab;
	int		j;

	j = 0;
	tab = "0123456789abcdef";
	if (n / 16 > 0)
		j += ft_putnbr_hex(n / 16, tab);
	j += ft_putchar(tab[n % 16]);
	return (j);
}
