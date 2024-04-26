//Quantidade de Latas
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qntlatas;
	float largura, altura, mqua, mqual;
	
	printf("Qual a largura da parede em metros? ");
	scanf("%f",&largura);
	fflush(stdin);
	printf("Qual a altura da parede em metros? ");
	scanf("%f",&altura);
	fflush(stdin);
	
	mqua=largura*altura; //descubro metros²
	mqual=mqua*3; //descubro quantos litros uso pelo metro²
	qntlatas=mqual/3.6; //divido os litros usados pela quantidade cheia de uma lata Ç3,6)
	
	printf("Devem ser compradas %i latas.",qntlatas);
	
	return 0;
}