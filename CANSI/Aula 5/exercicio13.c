/* 13. Faça um programa que mostre a soma desta serie 
S = (37*38)/1 + (36*37)/2 + (35*36)/3 + ... + (1*2)/37.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m1=37, m2=38, den;
    float soma = 0;

    // Loop para percorrer os termos da série
    for (den = 1; den <= 37; den++) {
        soma += ((float)m1 * (float)m2)/(float)den;
        m1=-1;
        m2=-1;
    }

    printf("A soma da série é: %.2f\n", soma);

    return 0;
}