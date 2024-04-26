//Fahrenheit -> celcius
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float celcius, fahrenheit;
	
	printf("Insira a temperatura em graus Fahrenheit: ");
	scanf("%f",&fahrenheit);
	fflush(stdin);
	
	celcius=5*(fahrenheit-32)/9;
	
	printf("A temperatura em graus celcius eh: %f",celcius);
	
	return 0;
}