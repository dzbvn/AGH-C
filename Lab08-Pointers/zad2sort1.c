#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void sort(int *tab, int len)
{
    qsort(tab, len, sizeof(tab[0]), cmp);
}

int main()
{
    int tab[] = {1, 34, 68, 21, 24, 410};
    int len = sizeof(tab) / sizeof(tab[0]);
    printf("%d\n", len);
    sort(tab, len);
    for (int i = 0; i < (sizeof(tab) / sizeof(int)); i++)
    {
        printf("%d\n", tab[i]);
    }

    return 0;
}