#include <stdlib.h>
#include <stdio.h>

int main()
{

    char c;
    scanf("%c", &c);
    if (c == 'c' || c == 'C')
        printf("Cebula");
    else if (c == 'd' || c == 'D')
        printf("Dosc, przestan");
    else if (c == 'g' || c == 'G')
        printf("Gadajace osly");
    else if (c == 'i' || c == 'I')
        printf("Imprezka");
    else if (c == 'j' || c == 'J')
        printf("Ja i moje bagno");
    else if (c == 'm' || c == 'M')
        printf("Moje bagno, ja i nikt wiecej");

    return 0;
}
