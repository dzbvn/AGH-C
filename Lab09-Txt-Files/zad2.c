#include <stdlib.h>
#include <conio.h>

int main()
{
    char c;
    FILE *plik;
    FILE *kopia;
    if ((plik = fopen("zrodlo.txt", "r")) == NULL)
    {
        printf("Nie mozna otworzyc\n");
        exit(1);
    }

    if ((kopia = fopen("kopia.txt", "w")) == NULL)
    {
        printf("Nie mozna otworzyc\n");
        exit(1);
    }

    c = fgetc(plik);
    while (c != EOF)
    {

        fputc(c, kopia);
        c = fgetc(plik);
    }

    fclose(plik);
    fclose(kopia);
    return 0;
}