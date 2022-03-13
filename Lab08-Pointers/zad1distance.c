#include <stdio.h>
#include <stdlib.h>

int distance(int *tab, int *koniec)
{

    return koniec - tab;
}

int main()
{
    int tab[] = {1, 34, 68, 21, 24, 410};
    int *koniec;
    koniec = &(tab[sizeof(tab) / sizeof(*tab)]);

    printf("%d\n", distance(tab, koniec));

    return 0;
}