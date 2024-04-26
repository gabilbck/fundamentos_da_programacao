// área do circulo
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float raio, res; //posso colocar pi=3.14
	
	printf("Digite o raio do circulo: ");
	scanf("%f",&raio);
	fflush(stdin);
	
	res=3.14*raio*raio;
	
	printf("Area eh igual a: %f",res);
	
	return 0;
}
