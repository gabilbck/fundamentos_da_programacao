// ???
/* 11. Faça um programa que mostre a soma desta serie 
S= 1/1 + 2/3 + 3/5+ 4/7 + 5/9+..+10/19.*/
#include <stdio.h>

int main() {
    int n;
    float soma = 0;

    for (n = 1; n <= 10; n++) {
        soma += (float)n / (2 * n - 1);
    }

    printf("A soma da série é: %.2f\n", soma);

    return 0;
}
