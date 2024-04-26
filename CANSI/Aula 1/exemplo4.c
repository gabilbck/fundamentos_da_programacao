#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	int idade; //%i
	float altura; //%f
	char letra; //%c
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	fflush(stdin);
	printf("Digite a primeira letra do seu nome: ");
	scanf("%c",&letra);
	fflush(stdin);
	 //& atribui valor a váriavel
	
	return 0;          
}