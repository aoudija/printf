#include "libftprintf.h"
#include <limits.h>
int main()
{
    // TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
	// TEST(7, print(" %p %p ", INT_MIN, INT_MAX));
	// TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));
    char *s;
    ft_printf("\n&%d&",ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
    // printf("%p\t%x\n", &s, &s);
}