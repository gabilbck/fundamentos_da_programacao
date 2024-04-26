// Salario por dias trabalhados e desconto
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float ndias, salario, desconto, liquido;
	
	printf("Numeros de dias trabalhados: ");
	scanf("%f",&ndias);
	fflush(stdin);
	
	salario=ndias*25;
	desconto = (salario/100) * 8;
	liquido = salario - desconto;
	
	printf("O seu salario do mes eh: %f",liquido);
	
	return 0;
}