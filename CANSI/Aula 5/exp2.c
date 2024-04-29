#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// saída
	numero=1;
	while(numero<=10){
	/*	- Enquanto o valor não chegar a um inteiro maior que dez,
		  o programa continua o looping
		- Se o numero for <=10 ele aparece na tela e depois recebe +1
		  onde, no próximo looping, verificará se chegou no valor
		  limite ou não
		- Chegando no limite: para; caso contrario, continua o looping 

	*/
		printf("%i, ",numero);
		numero++; // numero = numero + 1;
	}
	return 0;
}