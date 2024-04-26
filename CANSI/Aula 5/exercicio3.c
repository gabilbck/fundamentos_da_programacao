#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// saída
	
	numero=1;
	do{
		printf("%i, ",numero);
		numero++;
	}while(numero<=10);
	
	
	/*
	numero=1;
	while(numero<=10){
		printf("%i, ",numero);
		numero++; // numero = numero + 1;
	}
	*/
	
	/*
	for(numero=1;numero<=10;numero++){
		printf("%i, ",numero);
	}
	*/
	return 0;
}