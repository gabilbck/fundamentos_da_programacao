// FUNCIONANDO
/* 8. Supondo que a população de um país A seja da ordem de 80.000 habitantes 
com uma taxa anual de crescimento de 3% e que a população do país B seja, 
aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%. 
Fazer um programa que calcule e escreva o número de anos necessários para que a 
população do país A ultrapasse ou iguale a população do país B, mantidas essas taxas
de crescimento.*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int paisA = 80000, paisB = 200000, anos = 0;
    float taxaA = 0.03, taxaB = 0.015;
    while(paisA<paisB){
        paisA = paisA + (paisA*taxaA);
        paisB = paisB + (paisB*taxaB);
        anos++;
    }
    printf("Apos %i anos, a populacao do pais A ultrapassara a populacao do pais B.", anos);
    return 0;
}
//CORREÇÃO
/*
int main(void){
	// variáveis
	float a=80000, b=200000;
	int anos=0;
	
	// processamento
	while(a<=b){
		a*=1.03;
		b*=1.015;
		anos++;
		printf("%i anos\ta = %.f \tb = %.f\n",anos,a,b);
		
	}
	
	// saída
	printf("A quantidade de anos e %i\n",anos);
		
	return 0;
}
*/