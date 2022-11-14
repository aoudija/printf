/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:02:48 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/14 11:29:02 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

 int	ft_putnbr_hex(unsigned long int n)
{
	char	*hex;
	int		j;

	j = 0;
	hex = "0123456789abcdef";
	if (n / 16 > 0)
		ft_putnbr_hex(n / 16);
	j += ft_putchar(hex[n % 16]);
	return (j);
}
