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