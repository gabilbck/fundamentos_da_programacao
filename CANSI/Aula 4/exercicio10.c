// 10. Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:
// a. Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";
// b. Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";
// c. Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa"
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1, n2, n3, n4, idades;
    float media;

    printf("Digite a idade do 1o aluno: ");
    scanf("%i",&n1);
    fflush(stdin);
    
    printf("Digite a idade do 2o aluno: ");
    scanf("%i",&n2);
    fflush(stdin);
    
    printf("Digite a idade do 3o aluno: ");
    scanf("%i",&n3);
    fflush(stdin);
    
    printf("Digite a idade do 4o aluno: ");
    scanf("%i",&n4);
    fflush(stdin);
    
    idades=n1+n2+n3+n4;
    media=((float)idades/4);
    
    if (media<25){
    	printf("Turma jovem: %f",media);
	} else if ((media>=25)&&(media<=40)){
		printf("Turma adulta %f",media);
	} else if (media>40){
		printf("Turma idosa %f",media);
	} else{
		printf("Insira um valor valido");
	}

    return 0;
}