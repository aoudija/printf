/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:02:48 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/16 17:16:16 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(unsigned long long n, char *tab)
{
	static int	j = 0;

	if (n / 16 > 0)
		ft_putnbr_hex(n / 16, tab);
	j += ft_putchar(tab[n % 16]);
	return (j);
}
