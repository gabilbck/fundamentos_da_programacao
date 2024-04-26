// Salário
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float ganho, horas, salario;
	
	printf("Quanto eh seu ganho por hora de trabalho? ");
	scanf("%f",&ganho);
	fflush(stdin);
	printf("Quantas horas voce trabalhou neste mes? ");
	scanf("%f",&horas);
	fflush(stdin);
	
	salario=ganho*horas;
	
	printf("O seu salario do mes eh: %f",salario);
	
	return 0;
}