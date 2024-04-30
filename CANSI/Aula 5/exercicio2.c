// FUNCIONANDO
/* 2. Faça um programa que peça dois números inteiros 
e gere os números pares que estão no intervalo entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // variáveis
    int n1, n2, i, flag = 0; // flag = 0, falso, não há intervalo entre os números int
    
    // entrada de dados
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    
    if (n1 < n2) { // se n1 é menor
        if (n1 % 2 != 0) { 
            n1--; // se n1 é ímpar, subtrai 1 do seu valor
        }
        if (n2 % 2 != 0) { 
            n2++; // se n2 é ímpar, adiciona 1 ao seu valor
        }
        for (i = n1 + 2; i < n2; i += 2) {
            printf("%i, ", i);
            flag = 1;
        }
    } else {
        if (n1 % 2 != 0) { 
            n1++; // se n1 é ímpar, adiciona 1 ao seu valor
        }
        if (n2 % 2 != 0) { 
            n2--; // se n2 é ímpar, subtrai 1 do seu valor
        }
        for (i = n2 - 2; i > n1; i -= 2) {
            printf("%i, ", i);
            flag = 1;
        }
    }
    if (!flag) {
        printf("Nao ha intervalo");
    }
    
    return 0;
}
