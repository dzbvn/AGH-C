#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nawiasy1(char **tab)
{
    int i;
    for (i = 0; i < sizeof(tab); i++)
    {
        printf("(%s)", *(tab + i));
    }
}

void nawiasy2(char **tab)
{
    int i;
    for (i = 0; i < sizeof(tab); i++)
    {
        printf("[%s]", *(tab + i));
    }
}

void nawiasy3(char **tab)
{
    int i;
    for (i = 0; i < sizeof(tab); i++)
    {
        printf("{%s}    ", *(tab + i));
    }
}

int main()
{
    int w = 3;
    int k = 12;

    char **tabS;
    int i;
    tabS = malloc(w * sizeof(char *));
    for (i = 0; i < w; i++)
    {
        tabS[i] = malloc(k * sizeof(char));
    }

    *tabS = "przykladowe";
    *(tabS + 1) = "zdanie";
    *(tabS + 2) = "w";
    *(tabS + 3) = "tablicy";

    void (*wskNawiasy1)(char **tab);
    wskNawiasy1 = nawiasy1;
    wskNawiasy1(tabS);

    puts("\n");

    void (*wskNawiasy2)(char **tab);
    wskNawiasy2 = nawiasy2;
    wskNawiasy2(tabS);

    puts("\n");

    void (*wskNawiasy3)(char **tab);
    wskNawiasy3 = nawiasy3;
    wskNawiasy3(tabS);

    return 0;
}