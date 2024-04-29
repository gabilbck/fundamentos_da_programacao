#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// saída
	
	numero=1;
	/*  - indice já tem um valor pré-estabelecido	*/
	do{
	/*  - printa o valor em tela;
		- acrescenta +1 ao valor do inteiro
		- se ainda for <= 10, vai repetir o looping, até resultar
		  em falso
		- se o parametro do while for falso no primeiro lopp,
		  ele executará apenas uma única vez (ex: 1, ) */
		printf("%i, ",numero);
		numero++;
	}while(numero<=10);
	return 0;
}