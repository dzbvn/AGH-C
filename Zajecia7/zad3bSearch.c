#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b){
    return ( *(int*)a - *(int*)b);

}

int main ()
{
    int tablica[] = {4, 11, 15, 20};

    int *wynik;
    int szukanaLiczba = 11;

    wynik = (int*) bsearch(&szukanaLiczba, tablica, 4, sizeof(int), cmp);
    if (wynik != NULL)
        printf("Znaleziono %d", *wynik);
    else
        printf("Nie ma takiej liczby w tablicy");

    return 0;
}