/*
FUNDAMENTOS DA PROGRAMAÇÃO - MANFRED
AULA 26/03/2014

======= CONDICIONAIS =======

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1, n2;
	
	printf("Digite N1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite N2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	if(n1>n2){
		printf("O maior numero e N1\n");	
	} else if(n2>n1){
		printf("O maior numero e N2\n");	
	} else{
		printf("Os numeros sao iguais");	
	}
	
	return 0;
}


======= =======
*/