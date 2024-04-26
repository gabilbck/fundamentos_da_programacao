// 9. Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:
//	a. A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
//	b. A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
//	c. A mensagem "Aprovado com Distinção", se a média for igual a 10.

#include <stdio.h>
#include <stdlib.h>

int main (void){
    float n1, n2, n3, notas, media;

    printf("Digite a 1a nota (0 a 10): ");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("Digite a 2a nota (0 a 10): ");
    scanf("%f",&n2);
    fflush(stdin);
    
    printf("Digite a 3a nota (0 a 10): ");
    scanf("%f",&n3);
    fflush(stdin);
    
    notas=n1+n2+n3;
    media=(notas/3);
    
    if (media>=7){
    	printf("Aprovado\n%.2f",media);
	} else if (media<7){
		printf("Reprovado\n%.2f",media);
	} else if (media==10){
		printf("Aprovado com Distincaoo!\n%f",media);
	} else{
		printf("Insira um valor valido!");
	}

    return 0;
}
