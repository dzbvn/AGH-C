#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *laczenie(char **tab)
{
    char *res = malloc(strlen(*tab) + strlen(*(tab + 1) + strlen(*(tab + 1)) + 1));
    strcpy(res, *tab);
    strcat(res, *(tab + 1));
    strcat(res, *(tab + 2));

    return res;
}

int main()
{
    int w = 3;
    int k = 10;

    char **tabS;
    int i;
    tabS = malloc(w * sizeof(char *));
    for (i = 0; i < w; i++)
    {
        tabS[i] = malloc(k * sizeof(char));
    }
    *tabS = "zeby";
    *(tabS + 1) = "ktory";
    *(tabS + 2) = "poniewaz";
    printf("%s\n", *(tabS));
    printf("%s\n", laczenie(tabS));

    return 0;
}