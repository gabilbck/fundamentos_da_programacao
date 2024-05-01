// FUNCIONANDO
/* 5. Faça um programa que calcule o número médio de alunos por turma. Para isto, 
peça a quantidade de turmas e a quantidade de alunos para cada turma.
As turmas não podem ter mais de 40 alunos.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
    int alunos, qtdTurmas, aux, i, media = 0;

    printf("Informe a quantidade de turmas: ");
    scanf("%i", &qtdTurmas);
    fflush(stdin);
    for(i=0; i<qtdTurmas; i++){
        printf("Informe a quantidade de alunos %i: ", i+1);
        scanf("%i", &aux);
        fflush(stdin);
        if(aux>40){
            printf("\n A turma nao pode ter mais de 40 alunos. ");
            return 0;
        }else{
            alunos = alunos+aux;
        }
    }
    media = alunos/qtdTurmas; //calcula a média
    printf("A media bimestral da turma e: %i",media); //mostra a média
    return 0;
}