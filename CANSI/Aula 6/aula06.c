/*
// === Exercício 1 === 
Como somar 10 numeros
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(void){
	// variáveis
	int n[TAM], soma=0;
	
	// entrada
	for(int i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	// prossamento
	for(int i=0;i<TAM;i++) soma+=n[i];
	
	// saída
	for(int i=0;i<TAM-1;i++) printf("%i + ",n[i]);
	printf("%i = %i\n",n[TAM-1], soma);
	
	return 0;
}



*/