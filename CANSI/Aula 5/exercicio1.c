// FUNCIONANDO
/* 1. Faça um programa que peça dois números inteiros e
gere os números inteiros que estão no intervalo entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // variáveis
    int n1, n2, i, flage = 0; // flage = 0, falso, não há intervalo entre os numeros int
    
    // entrada de dados
    printf("Digite um numero: ");
    scanf("%i", &n1);
    fflush(stdin);
    
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    fflush(stdin);
    
    // saída de dados
    if (n1 < n2) {
        for (i = n1 + 1; i < n2; i++) {
            printf("%i, ", i);
            flage = 1;
        }
    } else {
        for (i = n2 - 1; i > n1; i--) {
            printf("%i, ", i);
            flage = 1;
        }
    }
    if (!flage) {
        printf("Nao ha intervalo");
    }
    
    return 0;
}
//CORREÇÃO
/*
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero1, numero2, i;
	int flag=0;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	// saída
	if (numero1 < numero2){
		for(i=numero1+1;i<numero2;i++){
			printf("%i, ",i);
			flag=1;
		}
	}else{
		for(i=numero1-1;i>numero2;i--){
			printf("%i, ",i);
			flag=1;
		}
	}
	if(flag){
		printf("Nao ha intervalo.\n");
	}
		
	return 0;
}
*/