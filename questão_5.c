#include <stdlib.h>
#include <stdio.h>

int main(){

    float k,c;

    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &k);
    c = 273.15 - k;
    printf("A temperatura digitada em Celsius eh: %f C", c);

    return 0;

}