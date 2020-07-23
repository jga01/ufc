#include <stdlib.h>
#include <stdio.h>

int main(){

    float b,h,a;

    printf("Digite o comprimento da base de um triangulo: ");
    scanf("%f", &b);
    printf("Digite o comprimento da altura do mesmo triangulo: ");
    scanf("%f", &h);
    a = b*h/2;
    printf("A area do triangulo apartir dos comprimentos fornecidos eh: %f u", a);

    return 0;

}