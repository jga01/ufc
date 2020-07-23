#include <stdlib.h>
#include <stdio.h>

int main(){

    float c,f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = c*(9.0/5.0)+32.0;
    printf("A temperatura digitada em Fahrenheit eh: %f", f);

    return 0;

}