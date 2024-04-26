// Média de notas
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, n3, n4, media;
	
	printf("Insira sua primeiro nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Insira sua segunda nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Insira sua terceira nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	printf("Insira sua quarta nota: ");
	scanf("%f",&n4);
	fflush(stdin);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("Sua media eh: %f",media);
	
	return 0;
}