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
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1, n2, n3;

    printf("Digite um numero: ");
    scanf("%i",&n1);
    fflush(stdin);

    printf("Digite outro numero: ");
    scanf("%i",&n2);
    fflush(stdin);

    printf("Digite mais um numero: ");
    scanf("%i",&n3);
    fflush(stdin);

    if (n1<n2&&n3){ //Se N1 for menor que os outros
    	printf(" %i\n",n1);
    	if(n2<n3){ 
    		printf(" %i\n",n2);
    		printf(" %i\n",n3); // N1, N2, N3
		} else if(n3<n2){
			printf(" %i\n",n3);
    		printf(" %i\n",n2); // N1, N3, N2
		}
    } else if(n2<n1&&n3){ //Se N2 for menor que os outros
    	printf(" %i\n",n2);
    	if(n1<n3){
    		printf(" %i\n",n1);
    		printf(" %i\n",n3); // N2, N1, N3
		} else if(n3<n1){
			printf(" %i\n",n3);
    		printf(" %i\n",n1); // N2, N3, N1
		}
	} else if(n3<n1&&n2){ //Se N3 for menor que os outros
		printf(" %i\n",n3);
		if(n1<n2){
			printf(" %i\n",n1);
    		printf(" %i\n",n2); // N3, N1, N2
		} else if(n2<n1){
			printf(" %i\n",n2);
    		printf(" %i\n",n1); // N3, N2, N1
		}
	} else if((n1==n2)<n3){ //Se N1 == N2 forem menores que N3
		printf(" %i\n %i\n %i\n",n1,n2,n3);
	} else if((n1==n3)<n2){ //Se N1 == N3 forem menores que N2
		printf(" %i\n %i\n %i\n",n1,n3,n2);
	} else if((n2==n3)<n1){ //Se N2 == N3 forem menores que N1
		printf(" %i\n %i\n %i\n",n2,n3,n1);
	} else if((n1==n2)>n3){ //Se N1 == N2 forem maiores que N3
		printf(" %i\n %i\n %i\n",n3,n1,n2);
	} else if((n1==n3)>n2){ //Se N1 == N3 forem maiores que N2
		printf(" %i\n %i\n %i\n",n2,n1,n3);
	} else if((n2==n3)>n1){ //Se N2 == N3 forem maiores que N1
		printf(" %i\n %i\n %i\n",n1,n2,n3);
	} else { //Se todos forem iguais if(n1==n2==n3)
		printf(" %i\n %i\n %i\n",n1,n2,n3);
	}
    return 0;
}

// 9. Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:
//	a. A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
//	b. A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
//	c. A mensagem "Aprovado com Distinção", se a média for igual a 10.

#include <stdio.h>
#include <stdlib.h>

int main (void){
    float n1, n2, n3, notas, media;

    printf("Digite a 1a nota (0 a 10): ");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("Digite a 2a nota (0 a 10): ");
    scanf("%f",&n2);
    fflush(stdin);
    
    printf("Digite a 3a nota (0 a 10): ");
    scanf("%f",&n3);
    fflush(stdin);
    
    notas=n1+n2+n3;
    media=(notas/3);
    
    if (media>=7){
    	printf("Aprovado\n%f",media);
	} else if (media<7){
		printf("Reprovado\n%f",media);
	} else if (media==10){
		printf("Aprovado com Distincaoo!\n%f",media);
	} else{
		printf("Insira um valor valido!");
	}

    return 0;
}


// 10. Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:
// a. Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";
// b. Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";
// c. Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa"
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1, n2, n3, n4, idades;
    float media;

    printf("Digite a idade do 1o aluno: ");
    scanf("%i",&n1);
    fflush(stdin);
    
    printf("Digite a idade do 2o aluno: ");
    scanf("%i",&n2);
    fflush(stdin);
    
    printf("Digite a idade do 3o aluno: ");
    scanf("%i",&n3);
    fflush(stdin);
    
    printf("Digite a idade do 4o aluno: ");
    scanf("%i",&n4);
    fflush(stdin);
    
    idades=n1+n2+n3+n4;
    media=((float)idades/4);
    
    if (media<25){
    	printf("Turma jovem: %f",media);
	} else if ((media>=25)&&(media<=40)){
		printf("Turma adulta %f",media);
	} else if (media>40){
		printf("Turma idosa %f",media);
	} else{
		printf("Insira um valor valido");
	}

    return 0;
}

// 11. Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.
//	a. O menu será como segue:
//		[ 1 ] – Adição
//		[ 2 ] – Subtração
//		[ 3 ] – Multiplicação
//		[ 4 ] – Divisão
//		[ 5 ] – Fim

#include <stdio.h>
#include <stdlib.h>

int main (void){
	char op;
    float n1, n2, res;
    
    printf("Calculadora Simples\n\n");
	
    printf("Digite o 1o numero: ");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("Digite o operador desejado, seguindo o menu:\n\n");
    printf("[ 1 ] – Adicao\n");
	printf("[ 2 ] – Subtracao\n");
	printf("[ 3 ] – Multiplicacao\n");
	printf("[ 4 ] – Divisao\n");
	printf("[ 5 ] – Fim\n");
    scanf("%c",&op);
    fflush(stdin);
    
    printf("Digite o 2o numero: ");
    scanf("%f",&n2);
    fflush(stdin);
    
    switch (op){
		case '1':
			res=n1+n2;
			printf("%f",res);
		break;
		case '2':
			res=n1-n2;
			printf("%f",res);
		break;
		case '3':
			res=n1*n2;
			printf("%f",res);
		break;
		case '4':
			res=n1/n2;
			printf("%f",res);
		break;
		case '5':
			printf("Fim!");
		break;
		default:
			printf("Você não inseriu um operador valido!");
		break;
	}	
    return 0;
}


// 12.Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
//	a. Área Retângulo = base * altura
//	b. Área Triângulo = base * altura/2
//	c. Área do Círculo = 2 * pi * r * r
//	d. Área do quadrado = lado * lado
//	e. Área do trapézio = (lmaior + lmenor) * altura/2
//	f. Sair









*/