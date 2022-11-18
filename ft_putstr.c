/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:52:22 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/18 10:36:37 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(const char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s)
		j += ft_putstr("(null)");
	else
	{
		while (s[i])
		{
			j += ft_putchar(s[i]);
			i++;
		}
	}
	return (j);
}
