#include <stdlib.h>
#include <stdio.h>

int main(){

    float a,b,c,soma;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &a);
    printf("Digite o segundo numero: \n");
    scanf("%f", &b);
    printf("Digite o terceiro numero: \n");
    scanf("%f", &c);
    soma = a + b + c;
    printf("A soma dos numeros eh: %f", soma);

    return 0;

}