#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    const char cytat[] = "Pamięć jest inteligencją głupców.";
    const char cytat2[] = "\nUmysł jest jak spadochron. Najlepiej działa wtedy, kiedy jest otwarty.";
    FILE *plik;
    if((plik = fopen("einstein.txt", "w")) == NULL){
        printf("Nie mozna otworzyc\n");
        exit(1);
    }
    fprintf(plik, "%s", cytat);
    fclose(plik);
    if((plik = fopen("einstein.txt", "a")) == NULL){
        printf("Nie mozna otworzyc\n");
        exit(1);
    }
    fprintf(plik, "%s", cytat2);
    fclose(plik);

    return 0;

}