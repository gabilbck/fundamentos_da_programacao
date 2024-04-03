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