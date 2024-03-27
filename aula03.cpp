/*
FUNDAMENTOS DA PROGRAMAÇÃO - MANFRED
AULA 26/03/2014

======= CONDICIONAIS =======

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1, n2;
	
	printf("Digite N1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite N2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	if(n1>n2){
		printf("O maior numero e N1\n");	
	} else if(n2>n1){
		printf("O maior numero e N2\n");	
	} else{
		printf("Os numeros sao iguais");	
	}
	
	return 0;
}


======= POSITIVO OU NEGATIVO =======

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1;
	
	printf("Digite o valor: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	if(n1>0){
		printf("Positivo\n");	
	} else if(n1<0){
		printf("Negativo\n");	
	} else{
		printf("Neutro");	
	}
	
	return 0;
}


=======  =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch(letra){ 
		case 'f':
			printf("Feminino\n");
			break;
		case 'm':
			printf("Masculino\n");
			break;
		default:
			printf("Não possui cadastro");
	}
	
	return 0;
}



======= ========
#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite o sexo (f/m): ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch(letra){ 
		case 'f':
			printf("Feminino\n");
			break;
		case 'm':
			printf("Masculino\n");
			break;
		case 'F':
			printf("Feminino\n");
			break;
		case 'M':
			printf("Masculino\n");
			break;
		default:
			printf("Erro de digitação");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite o sexo (f/m): ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch(letra){ 
		case 'f': case 'F':
			printf("Feminino\n");
			break;
		case 'm': case 'M':
			printf("Masculino\n");
			break;
		default:
			printf("Erro de digitação");
	}
	
	return 0;
}




==============

#include <stdio.h>
#include <stdlib.h>

int main (void){
	float numero;
	int aux;
	
	printf("Digite um numero: ");
	scanf("%f",&numero);
	fflush(stdin);
	
	if (numero==((int)numero)){
		printf("O numero e inteiro\n");
	} else{
		printf("O numero e decimal\n");
	}
	
	return 0;
}
*/