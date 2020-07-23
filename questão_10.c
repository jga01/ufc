#include <stdlib.h>
#include <stdio.h>

int main(){

    float sh,sb,sl;
    int h,i;
    i = 24;

    printf("Digite o salario/hora: ");
    scanf("%f", &sh);
    printf("Digite o numero de horas trabalhadas por mes: ");
    scanf("%d", &h);
    sb = sh*h;
    sl = sb - sb*i/100;
    printf("O salario, apos impostos, eh: R$%f", sl);

    return 0;

}