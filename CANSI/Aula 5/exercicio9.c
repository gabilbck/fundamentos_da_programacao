//FUNCIONANDO
/* 9. Faça um programa que calcule e mostre a soma dos números pares
entre 100 e 200 (inclusive). O usuário deve ter a opção de repetir
quantas vezes quiser esta operação.*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i, soma, op;
    do{ 
    /*  Soma começa em 0 para que a cada repetição a soma seja feita
        corretamente. */
        soma = 0;
    /*  O laço for percorre de 100 a 200 e verifica se o número é par.
        Caso seja, a variável soma recebe o valor do número. */
        for(i=100; i<=200; i++){
            if(i%2==0){
                soma = soma + i;
            }
        }
        printf("A soma dos numeros pares entre 100 e 200 eh: %i\n", soma);
        printf("Deseja repetir a operacao? (1 - Sim, 0 - Nao): ");
        scanf("%i", &op);
        fflush(stdin);
    }while(op==1);
    return 0;
}

//correção
/*
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int soma = 0, i;
	char op;
	
	do{
		soma=0;
		// processamento
		for(i=100;i<=200;i+=2){
			soma+=i;
		}
		printf("A soma e %i\n",soma);
		printf("Deseja repetir (s/n)? ");
		scanf("%c",&op);
		fflush(stdin);
		
	}while(op=='s');

	return 0;
}
*/