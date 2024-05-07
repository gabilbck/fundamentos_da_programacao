/* 15. Faça um programa que peça um número inteiro positivo
e em seguida mostre este número invertido.*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i;
    printf("Digite um numero positivo: ");
    scanf("%i",&i);
    fflush(stdin);
    if(i<=0){
        printf("voce nao pode digitar valores negativos");
    } else{
        printf("-%i\n",i);
    }
}