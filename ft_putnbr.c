/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:52:05 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/18 11:25:25 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		j;

	j = 0;
	nb = (long) n;
	if (nb < 0)
	{
		nb = -nb;
		j += ft_putchar('-');
	}
	if (nb >= 10)
	{
		j += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		j += ft_putchar(nb + 48);
	return (j);
}
