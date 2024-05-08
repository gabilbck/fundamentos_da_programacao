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

//CORREÇÃO
/*
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i, qtd_turmas, qtd_alunos, soma = 0;
	float media;
	
	// entrada
	printf("Digite a quantidade de turmas: ");
	scanf("%i",&qtd_turmas);
	fflush(stdin);
	for(i=1;i<=qtd_turmas;i++){
		printf("Digite a quantidade de alunos na turma %i: ",i);
		scanf("%i",&qtd_alunos);
		fflush(stdin);
		if(qtd_alunos>=1 && qtd_alunos<=40){
			soma+=qtd_alunos;	
		}else{
			printf("Erro! A quantidade maior 40 alunos por turma\n");
			
			char op;
			printf("Deseja incluir este numero de alunos (s/n): ");
			scanf("%c",&op);
			fflush(stdin);
			if(op=='s'){
				soma+=qtd_alunos;
			}else{
				i--;
			}
			
		}	
	}
	
	// processamento
	media=(float)soma/qtd_turmas;
	
	// saída
	printf("A media de alunos por turma e %.1f\n",media);
		
	return 0;
}
*/