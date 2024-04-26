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
    printf("[ 1 ] Adicao\n");
	printf("[ 2 ] Subtracao\n");
	printf("[ 3 ] Multiplicacao\n");
	printf("[ 4 ] Divisao\n");
	printf("[ 5 ] Fim\n");
    scanf("%c",&op);
    fflush(stdin);
    
    printf("Digite o 2o numero: ");
    scanf("%f",&n2);
    fflush(stdin);
    
    switch (op){
		case '1':
			res=n1+n2;
			printf("%f + %f = %f\n",n1,n2,res);
		break;
		case '2':
			res=n1-n2;
			printf("%f - %f = %f\n",n1,n2,res);
		break;
		case '3':
			res=n1*n2;
			printf("%f * %f = %f\n",n1,n2,res);
		break;
		case '4':
			if(n2!=0){
				res=n1/n2;
				printf("%f / %f = %f\n",n1,n2,res);	
			} else{
				printf("Voce nao pode dividir valores por zero!");
			}
		break;
		case '5':
			printf("Fim!");
		break;
		default:
			printf("Voce nao inseriu um operador valido!");
		break;
	}	
    return 0;
}