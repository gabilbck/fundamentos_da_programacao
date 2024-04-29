#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// saída
	for(numero=1;numero<=10;numero++){
		printf("%i, ",numero);
	/*  - numero equivale ao i (índice)
		- numero começa com valor 1, vai acrescentando +1 a
		  cada loop até o valor chegar a 10, então o pragrama
		  tem seu estado concluído
		- Mostra o valor da variável a cada loop gerado, 
		  através de um printf() 
		- O resultado deve ser:
		  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, */
	}	
	return 0;
}