#include <stdlib.h>
#include <stdio.h>

int main(){

    float a,b,c,d,m;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);
    printf("Digite o quarto numero: ");
    scanf("%f", &d);
    m = (a+b+c+d)/4;
    printf("A media aritmetica dos quatro numeros eh: %f", m);

    return 0;

}