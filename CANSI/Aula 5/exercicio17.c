/* 17. Faça um programa que peça um número inteiro, calcule e mostre seu fatorial.
O usuário deve ter a opção de repetir quantas vezes quiser esta operação. 
Ex.: 5! = 5 x 4 x 3 x 2 = 120*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num, i, fatorial;
    char continuar;
    do {
        fatorial = 1;
        printf("Digite um numero inteiro para calcular o fatorial: ");
        scanf("%i", &num);
        if (num < 0) {
            printf("O fatorial de numeros negativos nao e definido.\n");
        } else {
            for (i = 1; i <= num; i++) {
                fatorial *= i;
            }
            printf("%i! = ", num);
            for (i = num; i >= 1; i--) {
                printf("%i", i);
                if (i != 1) {
                    printf(" x ");
                }
            }
            printf(" = %i\n", fatorial);
        }
        printf("Deseja calcular o fatorial de outro numero? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    return 0;
}