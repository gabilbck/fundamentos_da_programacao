/*
2. Faça uma função que desenhe linhas de caracteres na tela, a função 
receberá como argumento o tipo de caractere e o número de linhas que deverá 
imprimir.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void desenhe(char c, int n);

int main(void){
	desenhe('_',5);
	return 0;
}

void desenhe(char c, int n){
	for(int l=1;l<=n;l++){
		for(int i=1;i<73;i++){
			printf("%c",c);
		}
		printf("\n");
	}
}