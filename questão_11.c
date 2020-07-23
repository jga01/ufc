#include <stdlib.h>
#include <stdio.h>

int main(){

    int v,r,n1,n5,n10,n50;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &v);

    n50 = v/50;
    r = v % 50;
    n10 = r/10;
    r = r % 10;
    n5 = r/5;
    r = r % 5;
    n1 = r/1;

    printf("Nota50 = %d\n", n50);
    printf("Nota10 = %d\n", n10);
    printf("Nota5 = %d\n", n5);
    printf("Nota1 = %d\n", n1);

    return 0;

}