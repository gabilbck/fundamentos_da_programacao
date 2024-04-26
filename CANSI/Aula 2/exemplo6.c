//Soma
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, soma;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	fflush(stdin);
	
	soma=n1+n2;
	
	printf("A soma dos numeros eh: %f",soma);
	
	return 0;
}