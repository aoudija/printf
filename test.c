#include "libftprintf.h"
#include <limits.h>
int main()
{
    // TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
	// TEST(7, print(" %p %p ", INT_MIN, INT_MAX));
	// TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));
    char *s;
    ft_printf("\n&%d&",printf("%x", -1));
    // printf("%p\t%x\n", &s, &s);
}