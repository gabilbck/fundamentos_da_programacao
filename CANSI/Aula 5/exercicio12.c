/* 12. Faça um programa que mostre a soma desta serie 
S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.*/
#include <stdio.h>

int main() {
    float soma = 0;

    // Loop para percorrer os termos da série
    for (int n = 1; n <= 99; n += 2) {
        soma += (float)n / (n / 2 + 1);
    }

    printf("A soma da série é: %.2f\n", soma);

    return 0;
}
