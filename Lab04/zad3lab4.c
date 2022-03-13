#include <stdlib.h>
#include <stdio.h>


int main(){

    int i;
    for(i = 0; i <= 127; i+=2)
        printf("Znak: %c Odpowiadajaca liczba: %d           Znak: %c Odpowiadajaca liczba: %d \n ", (char)i, i, (char)i+1, i+1);



 return 0;
}
