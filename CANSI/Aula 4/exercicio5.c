// 5. Faça um programa que peça um número e informe se o número é inteiro ou quebrado
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float numero;
	int aux;
	
	printf("Digite um numero: ");
	scanf("%f",&numero);
	fflush(stdin);
	
	if (numero==((int)numero)){
		printf("O numero e inteiro\n");
	} else{
		printf("O numero e decimal\n");
	}
	
	return 0;
}