/*
FUNDAMENTOS DA PROGRAMAÇÃO - MANFRED
AULA 05/03/2014

======= EXEMPLO =======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> //padrão das bibliotecas
#include <conio.h> //p/ linux

int main (void){
	// main = função principal, sem ele, não funciona
	printf("Gabrieli Eduarda Lembeck"); //função imprime em tela o resultado
	
	return 0;
}

======= EXERCÍCIO 1 =======

int main (void){
	//n -> pula linha
	printf("Nome: Gabrieli Eduarda Lembeck\n");
	printf("Endereco: Joinville - 89209148\n");
	printf("Telefone: 47996979754 \n");
	printf("E-mail: gabrielieduardalembeck@gmail.com \n");
	printf("CPF: 12312312390");
	
	return 0; //retorna 0 se for tudo executado com êxito
}

======= EXERCÍCIO 2 =======

int main (void){
	int idade; //%i
	float altura; //%f
	char letra; //%c
	
	idade = 18; //var recebe valor
	altura = 1.62;
	letra = 'G';
	
	printf("Idade = %i\n",idade);
	printf("Altura = %.2f\nLetra = %c\n",altura, letra);
    
    // %n -> chama a variavel tipada
	// %.2f -> imprime com 2 casas decimais
	
	return 0;
}

======= EXERCÍCIO 3 =======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	int idade; //%i
	float altura; //%f
	char letra; //%c
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	fflush(stdin);
	printf("Digite a primeira letra do seu nome: ");
	scanf("%c",&letra);
	fflush(stdin);
	 //& atribui valor a váriavel
	
	return 0;          
}

======= EXERCÍCIO 4 =======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	int idade, ano;
	
	//entrada de dados
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	
	// processamento dos dados
	ano=2024-idade;
	
	//saída de dados
	printf("O ano que voce nasceu eh: %i\n",ano);
	
	return 0;        
}

======= EXERCÍCIO 5 =======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	float celcius, fahrenheit;
	
	//entrada de dados
	printf("Digite a temperatura em celcius: ");
	scanf("%f",&celcius);
	fflush(stdin);
	
	// processamento dos dados
	fahrenheit=(celcius*1.8)+32;	
	
	//saída de dados
	printf("A temperatura em Fahrenheit e: %f",fahrenheit);
	
	return 0;        
}
*/