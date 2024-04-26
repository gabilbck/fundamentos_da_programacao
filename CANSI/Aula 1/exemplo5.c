#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	int idade, ano;
	
	//entrada de dados
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	
	// processamento dos dados
	ano=2024-idade;
	
	//saída de dados
	printf("O ano que voce nasceu eh: %i\n",ano);
	
	return 0;        
}