// FUNCIONANDO
/* 4. Faça um programa que calcule e mostre a média bimestral da turma.
O usuário deve informar a quantidade de notas, bem como cada nota.*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    float nota, aux, media = 0;
    int qtdNotas, i;

    printf("Informe a quantidade de notas: ");
    scanf("%i", &qtdNotas);
    fflush(stdin);

    for(i=1; i<qtdNotas; i++){
        printf("Informe a nota %i: ", i); //digita a nota conforme a quantidade de notas informada
        scanf("%f", &aux);
        fflush(stdin);
        nota = nota+aux;
    }
    media = nota/(float)qtdNotas; //calcula a média
    printf("A média bimestral da turma é: %.2f", media); //mostra a média
    return 0;
}