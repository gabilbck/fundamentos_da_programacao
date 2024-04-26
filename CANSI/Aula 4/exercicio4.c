// 4. Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n, res;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	if (n % 2 == 0){
		res=n+1;
		printf("Agora seu numero %i e impar: %i",n,res);
	} else{
		res=n+1;
		printf("Agora seu numero %i e par: %i",n,res);	
	}
	
	return 0;
}