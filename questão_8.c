#include <stdlib.h>
#include <stdio.h>

int main(){

    int n,s;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    s = n*(n+1)/2;
    printf("A soma de todos os numeros inteiros positivos de 1 ao numero digitado eh: %d", s);

    return 0;

}