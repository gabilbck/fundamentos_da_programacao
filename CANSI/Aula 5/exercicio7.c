// FUNCIONANDO
/* 7. Faça um programa que gere a tabuada de 1 a 10 de qualquer número.
O usuário deve informar de qual número deseja ver a tabuada.*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n, i;
    printf("Informe o numero para gerar a tabuada: ");
    scanf("%i", &n);
    fflush(stdin);
    for(i=1; i<=10; i++){
        printf("%i x %i = %i\n", n, i, n*i);
    }
    return 0;
}