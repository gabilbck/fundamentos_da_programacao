/* 14. Faça um programa que peça 10 números inteiros, calcule e mostre 
a quantidade de números pares, a quantidade de números impares e a 
soma de todos os números.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 1, numtemp = 0, par = 0, impar = 0, soma = 0;

    while (i <= 10) { //enquanto o i não chegar a mais de 10
        printf("Digite o %i numero: \n", i);
        scanf("%i", &numtemp); //substitui o valor do numero
        fflush(stdin);
        soma += numtemp; //acrescenta o valor do numero a soma total
        if (numtemp % 2 == 0) { //verifica se o numero digitado é par
            par += 1; //se par, adiona +1 ao contador par
        } else {
            impar += 1; //se não, adiciona +1 ao contador impar
        }
        i++; //acrescnta +1 ao i para retomar o looping
    }
    printf("numeros pares: %i\nnumeros impares: %i\nsoma total:%i\n", par, impar, soma);
}
