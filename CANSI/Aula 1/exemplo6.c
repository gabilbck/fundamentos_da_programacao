#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	float celcius, fahrenheit;
	
	//entrada de dados
	printf("Digite a temperatura em celcius: ");
	scanf("%f",&celcius);
	fflush(stdin);
	
	// processamento dos dados
	fahrenheit=(celcius*1.8)+32;	
	
	//saída de dados
	printf("A temperatura em Fahrenheit e: %f",fahrenheit);
	
	return 0;        
}