/* 16. A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,...
Faça um programa capaz de gerar a série de acordo com a quantidade de termos
informada pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, primeiro = 1, segundo = 1, proximo, i;
    printf("Digite a quantidade de termos da serie de Fibonacci: ");
    scanf("%i", &n);
    printf("Serie de Fibonacci com %i termos:\n", n);
    if(n==1){
        printf("%i",primeiro);
    } else{
        printf("%i, %i, ", primeiro, segundo); // Imprimindo os dois primeiros termos
        for (i = 2; i < n; i++) { // Começando a partir do terceiro termo
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
            printf("%i, ", proximo);
        }
    }
    return 0;
}