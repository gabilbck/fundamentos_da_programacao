// FUNCIONANDO
/* 3. Faça um programa que leia dez números inteiros e
calcule a diferença entre o maior e o menor número do conjunto. */
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int numero, menor, maior, i; //variaveis
    for (i=1; i<=10; i++) {
        printf("Digite %i numero: ",i); //entrada de dados
        scanf("%i",&numero);
        fflush(stdin);
        if(i==10){ //processamento
            /*  Se o for estiver na 10ª execução, calcula a diferença entre
                o maior e o menor numero digitado */
            printf("A diferenca entre o maior e o menor numero e %i\n",maior-menor); //saida de dados
        }else{
            if(i==1){ 
            /*  Se o for estiver na 1ª execução, define o numero maior e 
                menor como o primeiro numero digitado */
                maior=numero;
                menor=numero;
            }else{
            /*  Se não estiver no primeiro looping, compara o numero digitado
                com o maior e menor numero digitado até o momento e subistitui
                se for verdadeiro */
                if(numero<menor){
                    menor=numero;
                }
                if(numero>maior){
                    maior=numero;
                }
            }
        }
    }	
	return 0;
}