#include <stdio.h>
#include <stdlib.h>

// prototipo das funções
void inicia_programa(void); // modelo de função sem entrada e sem saída
int soma(int a1, int b1); // modelo de função com entrada e com saída
int digitar(void); // modelo de função sem entrada e com saída
void imprimir_texto(char texto[]); // modelo de função com entrada e sem saída

int main(void){
	inicia_programa();
	int a, b;
	a=digitar();
	b=digitar();
	int resultado = soma(a,b);
	imprimir_texto("A soma e ");
	printf("%i",resultado);
	
	return 0;
}

// funções
void inicia_programa(void){
	system("cls");
	system("color 71");
}

// a1=a e b1=b
int soma(int a1, int b1){
	int r = a1+b1*3.14;
	return r;
}

int digitar(void){
	int n;
	imprimir_texto("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	return n;
}

void imprimir_texto(char texto[]){
	printf("%s",texto);
}