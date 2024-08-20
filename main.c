#include "ft_printf.h"
#include <stdio.h>

int main(void) {
    // %c
    printf("-----C-----\n");
    char b = 'a';
    printf("my_printf__ = %c | Taille = %i | std_printf_ = %c | Taille = %i\n", b, ft_printf("my_printf__ = %c\n", b), b, printf("std_printf_ = %c\n", b));
    printf("\n");

    // %s
    printf("-----S-----\n");
    char a[] = "Lol";
    printf("my_printf__ = %s | Taille = %i | std_printf_ = %s | Taille = %i\n", a, ft_printf("my_printf__ = %s\n", a), a, printf("std_printf_ = %s\n", a));
    printf("\n");

    // %p 
    char *d = NULL;
    printf("-----P-----\n");
    printf("my_printf__ = %p | Taille = %i | std_printf_ = %p | Taille = %i\n", d, ft_printf("my_printf__ = %p\n", d), d, printf("std_printf_ = %p\n", d));
    printf("\n");

    // %d
    int e = -45;
    printf("-----D-----\n");
    printf("my_printf__ = %d | Taille = %i | std_printf_ = %d | Taille = %i\n", e, ft_printf("my_printf__ = %d\n", e), e, printf("std_printf_ = %d\n", e));
    printf("\n");

    // %i
    int f = -1455;
    printf("-----I-----\n");
    printf("my_printf__ = %i | Taille = %i | std_printf_ = %i | Taille = %i\n", f, ft_printf("my_printf__ = %i\n", f), f, printf("std_printf_ = %i\n", f));
    printf("\n");

    // %u
    int g = -4;
    printf("-----U-----\n");
    printf("my_printf__ = %u | Taille = %i | std_printf_ = %u | Taille = %i\n", g, ft_printf("my_printf__ = %u\n", g), g, printf("std_printf_ = %u\n", g));
    printf("\n");

    // %x
    int h = -527;
    printf("-----x-----\n");
    printf("my_printf__ = %x | Taille = %i | std_printf_ = %x | Taille = %i\n", h, ft_printf("my_printf__ = %x\n", h), h, printf("std_printf_ = %x\n", h));
    printf("\n");

    // %X
    unsigned int i = 4854;
    printf("-----X-----\n");
    printf("my_printf__ = %x | Taille = %i | std_printf_ = %x | Taille = %i\n", i, ft_printf("my_printf__ = %x\n", i), i, printf("std_printf_ = %x\n", i));
    printf("\n");

    // %%
    printf("----------\n");
    printf("my_printf__ = %% | Taille = %i | std_printf_ = %% | Taille = %i\n", ft_printf("my_printf__ = %%\n"), printf("std_printf_ = %%\n"));
    printf("\n");

    return (0);
}
