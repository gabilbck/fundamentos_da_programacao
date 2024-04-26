// 2.Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1;
	
	printf("Digite o valor: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	if(n1>0){
		printf("Positivo\n");	
	} else if(n1<0){
		printf("Negativo\n");	
	} else{
		printf("Neutro");	
	}
	
	return 0;
}