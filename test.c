#include "libftprintf.h"

int main()
{
    char *s;
    // s = calloc(5, 1);
    // memcpy(s, "ibra", 4);
    // // ft_printf("%x",s);
    printf("%p\t%x\n", &s, &s);
}