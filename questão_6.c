#include <stdlib.h>
#include <stdio.h>
#define pi 3.14

int main(){

    float g,r;

    printf("Digite um angulo em graus: ");
    scanf("%f", &g);
     r = g* pi/180;
     printf("O angulo digitado em radianos eh: %f rad", r);

     return 0;

}