#include <stdlib.h>
#include <stdio.h>

int main()
{

    char tekst[] = "teksTT845 8658";
    int sumaLiczb = 0;
    int i;
    for (i = 0; i < sizeof(tekst); ++i)
    {
        if (tekst[i] >= '0' && tekst[i] <= '9')
            sumaLiczb += 1;
    }
    printf("%d", sumaLiczb);

    return 0;
}
