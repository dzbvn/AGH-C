#include <stdio.h>
#include <string.h>
#include <time.h>


int main() {
    float temp;

    scanf("%f", &temp);

    float celsjusz(float temp){
        float fahren  = 32 + 1.8 * temp;
        float kelwin = temp + 273;
        printf("%.2fC = %.2fF = %.2fK\n", temp, fahren, kelwin);
    }
    float fahrenheit(float temp){
        float celsjusz  = 0.55 * (temp - 32);
        float kelwin = celsjusz + 273;
        printf("%.2fF = %.2fC = %.2fK\n", temp, celsjusz, kelwin);
    }
    float kelwin(float temp){
        float celsjusz  = temp - 273;
        float fahren = 32 + 1.8 * celsjusz;
        printf("%.2fK = %.2fC = %.2fF\n", temp, celsjusz, fahren);
    }

    celsjusz(temp);
    fahrenheit(temp);
    kelwin(temp);
    return 0;
}
