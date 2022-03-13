#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kwota;
    float emeryt;
    float rent;
    float chorobowa;
    float kosztUzyskaniaPrzychodu;
    float dochodDoOpodatkowania;
    float zaliczkaPodatek;
    float zdrowotne;
    float dochodDoOpodatkowania2;
    float fgsp;

    scanf("%f", &kwota);
    kosztUzyskaniaPrzychodu = 111, 25;
    emeryt = kwota * 0.0976;
    printf("Ubezp emerytalne: %f\n", emeryt);

    rent = kwota * 0.015;
    printf("Ubezp rentowne: %f\n", rent);

    chorobowa = kwota * 0.0245;
    printf("Ubezp chorobowe: %f\n", chorobowa);

    dochodDoOpodatkowania = kwota - (emeryt + rent + chorobowa);

    // zdrowotne
    zdrowotne = dochodDoOpodatkowania * 0.09;
    printf("Ubezp zdrowotne: %f\n", zdrowotne);

    // zaliczka
    zaliczkaPodatek = (dochodDoOpodatkowania - kosztUzyskaniaPrzychodu) * 0.17;
    printf("Zaliczka: %f\n", zaliczkaPodatek);

    printf("Fundusz pracy: %f\n", chorobowa);

    printf("FGSP: %f\n", kwota * 0.001);

    return 0;
}
