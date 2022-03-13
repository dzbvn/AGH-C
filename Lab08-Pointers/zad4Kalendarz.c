#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miesiac;
    int dzien;
    scanf("%d", &miesiac);
    scanf("%d", &dzien);
    int liczbaDni;
    if (miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12)
        liczbaDni = 31;
    if (miesiac == 2)
        liczbaDni = 28;
    else
        liczbaDni = 30;
    printf("| Ni| Po| Wt| Sr| Cz| Pt| So|\n");
    for (int j = 0; j < dzien; j++)
    {
        printf("|  |");
    }

    for (int i = 1; i <= liczbaDni; i++)
    {

        if (i == dzien + 2 || i == dzien + 7 || i == dzien + 14 || i == dzien + 21 || i == dzien + 28)
            printf("\n");
        if (i < 10)
            printf("| %d|", i);
        else
            printf("|%d|", i);
    }

    return 0;
}