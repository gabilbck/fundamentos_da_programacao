/*
FUNDAMENTOS DA PROGRAMAÇÃO - MANFRED
AULA 02/04/2014

======= CONDICIONAIS =======


// 1. Faça um programa que peça dois números e imprima o maior deles.
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

// 2.Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo
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

// 3.Faça um programa que peça um número e imprima se o número é par ou ímpar
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	if (n % 2 == 0){
		printf("Par");
	} else{
		printf("Impar");	
	}
	
	return 0;
}


// 4. Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n, res;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	if (n % 2 == 0){
		res=n+1;
		printf("Agora seu numero %i e impar: %i",n,res);
	} else{
		res=n+1;
		printf("Agora seu numero %i e par: %i",n,res);	
	}
	
	return 0;
}

// 5. Faça um programa que peça um número e informe se o número é inteiro ou quebrado
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

// 6. Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido

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

// 7. Faça um programa que verifique se uma letra digitada é vogal ou consoante.
#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch(letra){ 
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("Vogal\n");
			break;
		default:
			printf("Consoante\n");
	}
	
	return 0;
}

//8. Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.















*/