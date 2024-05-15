/* 1. Construa um algoritmo que leia um vetor de 10 números inteiros e mostre a
soma dos números. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n[10], soma=0;
    for(int i=0;i<10;i++){
        printf("Digite o %io numero",i+1);
        scanf("%i",n[i-1]);
        soma+=n[i];
    }
    printf("A soma de %i + %i + %i + %i + %i + %i + %i + %i + %i + %i = %i"),n[0],n[1],n[2],n[3],n[4],n[5],n[6],n[7],n[8],n[9],soma;

    return 0;
}