/*10. Construa um algoritmo que leia um vetor de 20 elementos e coloque-os em
ordem crescente.*/
#include <stdio.h>

int main() {
    int vetor[20];
    int i, j, temp;

    // Ler os 20 elementos do vetor
    printf("Digite 20 números:\n");
    for (i = 0; i < 20; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Ordenar o vetor em ordem crescente usando o algoritmo Bubble Sort
    for (i = 0; i < 20 - 1; i++) {
        for (j = 0; j < 20 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Trocar os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibir o vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
