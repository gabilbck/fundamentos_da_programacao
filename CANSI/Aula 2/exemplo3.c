// Transformações de números e expressões
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int num1, num2; //numéros inteiros
	float num3, a, b, c; //números reais
	
	printf("Insira um numero inteiro: ");
	scanf("%i",&num1);
	fflush(stdin);
	printf("Insira outro numero inteiro: ");
	scanf("%i",&num2);
	fflush(stdin);
	printf("Insira um numero real: ");
	scanf("%f",&num3);
	fflush(stdin);
	
	a=(num1*2)+((float)num2/2); // para transformar o int em float
	b=(num1*3)+num3;
	c=(num3*num3*num3);
	
	printf("O produto do dobro do primeiro com metade do segundo: %f",a);
	printf("\n");
	printf("A soma do triplo do primeiro com o terceito: %f",b);
	printf("\n");
	printf("O terceiro elevado ao cubo: %f",c);
	
	return 0;
}
