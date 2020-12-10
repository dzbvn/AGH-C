#include<stdio.h>
#include<stdlib.h>
#include <time.h>

time_t aktualnyCzas(){
    time_t czas;
    struct tm * data;
    time(&czas);
    return ctime(&czas);
}
void aktualnyMiesiac(){
    time_t czas;
    struct tm * data;
    char  str[50];

    time(&czas);
    data = localtime(&czas);
    strftime(str, 50, "Aktualny miesiac: %m", data);

    printf("%s\n", str);
}

void aktualnyDzien(){
    time_t czas;
    struct tm * data;
    char  str[50];

    time(&czas);
    data = localtime(&czas);
    strftime(str, 50, "Aktualny dzien: %d", data);

    printf("%s\n", str);
}

void aktualnyRok(){
    time_t czas;
    struct tm * data;
    char  str[50];

    time(&czas);
    data = localtime(&czas);
    strftime(str, 50, "Aktualny rok: %Y", data);

    printf("%s\n", str);
}



int main(){

    printf("%s", aktualnyCzas());
    aktualnyMiesiac();
    aktualnyDzien();
    aktualnyRok();
    return 0;
}