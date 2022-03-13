#include <stdio.h>
#include <stdlib.h>
struct Wynik
{

    char *nazwisko;
    int glosy;
} tab[5];
int cmp(const void *a, const void *b)
{
    return (((struct Wynik *)a)->glosy - ((struct Wynik *)b)->glosy);
}

void sortujWynikiWyborcze(struct Wynik *tab, int len)
{

    qsort(tab, len, sizeof(struct Wynik), cmp);
}
int main()
{
    int len = 5;
    tab[0].nazwisko = "Kowalski";
    tab[0].glosy = 12;

    tab[1].nazwisko = "Ochocki";
    tab[1].glosy = 50;

    tab[2].nazwisko = "Nowak";
    tab[2].glosy = 3;

    tab[3].nazwisko = "Zamiar";
    tab[3].glosy = 54;

    tab[4].nazwisko = "Ziaja";
    tab[4].glosy = 18;

    sortujWynikiWyborcze(tab, len);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", tab[i].glosy);
    }

    return 0;
}