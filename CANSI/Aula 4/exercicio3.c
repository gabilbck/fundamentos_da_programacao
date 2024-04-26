// 3.Faça um programa que peça um número e imprima se o número é par ou ímpar
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	if (n % 2 == 0){
		printf("Par");
	} else{
		printf("Impar");	
	}
	
	return 0;
}