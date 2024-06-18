/*
1. Faça um programa que leia um número, passe este número como parâmetro 
para uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
int valida(int n);

int main(void){
	// variáveis
	int numero;
	
	// entrada
	printf("Digite um numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	// saída e processamento
	if(!valida(numero)){
		printf("E par o numero\n");
	}else{
		printf("E impar o numero\n");
	}
	
	return 0;
}

int valida(int n){
	return n%2;
}