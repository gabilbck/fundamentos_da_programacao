// metros para centimetros
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float metro, centimetro;
	
	printf("Digite o valor em metros: ");
	scanf("%f",&metro);
	fflush(stdin);
	
	centimetro=metro*100;
	
	printf("O valor em centimetros eh: %.1f cm",centimetro);

    //ou faço direto: printf("O valor em centimetros eh: %f",metro*100);
	
	return 0;
}