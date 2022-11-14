#include "libftprintf.h"

int	ft_putchar(char c)
{
	int	j;

	j = 0;
	write(1, &c, 1);
	j++;
	return (j);
}