/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:26:51 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/18 10:30:13 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_ptnbr_u(unsigned int n)
{
	unsigned long	nb;
	int				j;

	j = 0;
	nb = (unsigned long) n;
	if (nb >= 10)
	{
		j += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		j += ft_putchar(nb + 48);
	return (j);
}
