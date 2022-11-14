#include "libftprintf.h"

int	ft_putstr(const char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		j += ft_putchar(s[i]);
		i++;
	}
	return (j);
}