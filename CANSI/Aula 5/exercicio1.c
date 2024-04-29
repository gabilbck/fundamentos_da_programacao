/* 1. Faça um programa que peça dois números inteiros e
gere os números inteiros que estão no intervalo entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	// variáveis
	int n1, n2, i, flage;
	
	// entrada de dados
	printf("Digite um numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// saída de dados
	if(n1<n2){
		for(i=n1+1;i<n2;i++){
			printf("%i, ",i);
			flage=1;
		}
	} else{
	 	for(i=n1-1;i>n2;i--){
			printf("%i, ",i);
			flage=1;
		}
	}
	if (!flage){
		printf("Nao ha intervalo");
	}
	return 0;
}