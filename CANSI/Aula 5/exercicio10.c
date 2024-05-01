/* 10. Faça um programa que peça dois números inteiros (base e expoente), 
calcule e mostre o primeiro número elevado ao segundo número.*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int base, expoente, i, resultado;
    printf("Digite a base: ");
    scanf("%i", &base);
    printf("Digite o expoente: ");
    scanf("%i", &expoente);
    resultado = 1;
    for(i=1; i<=expoente; i++){
        resultado = resultado * base;
    }
    printf("O resultado de %i elevado a %i eh: %i\n", base, expoente, resultado);
    return 0;
}