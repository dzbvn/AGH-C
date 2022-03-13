#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;

    scanf("%d", &liczba);

    switch (liczba)
    {
    case 1:
    case 2:
        printf("Slynal z madrosci\n");
        break;
    case 3:
        printf("Co byl glupi poszedl do lacznosci");
        break;
    def:
        printf("Nie bylo tyle synow");
    }

    return 0;
}
