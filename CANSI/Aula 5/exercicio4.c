/*
10) Faça um programa que implemente uma calculadora simples.
 O programa deve solicitar os operandos e o operador e mostrar a 
entrada e o resultado. Inclua verificadores de erro para operadores 
inválidos e tentativa de divisão por zero. 

O menu será como segue:
[1] - Adicao
[2] - Subtracao
[3] - Multiplicacao
[4] - Divisao
[5] - Fim
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	// variáveis
	int opcao;
	float n1, n2, r;
	
	do{
		system("cls");
		system("color 71");
		// entrada
		printf("[1] - Adicao\n");
		printf("[2] - Subtracao\n");
		printf("[3] - Multiplicacao\n");
		printf("[4] - Divisao\n");
		printf("[5] - Fim\n");
		printf("Digite uma opcao: ");
		scanf("%i",&opcao);
		fflush(stdin);
		
		if(opcao>=1 && opcao<=5){
			if(opcao!=5){
				printf("Digite 1 numero: ");
				scanf("%f",&n1);
				fflush(stdin);
				printf("Digite 2 numero: ");
				scanf("%f",&n2);
				fflush(stdin);
			}
			switch(opcao){
				case 1:
					r=n1+n2;
					printf("%f + %f = %f\n",n1,n2,r);
					break;
				case 2:
					r=n1-n2;
					printf("%f - %f = %f\n",n1,n2,r);
					break;
				case 3:
					r=n1*n2;
					printf("%f * %f = %f\n",n1,n2,r);
					break;
				case 4:
					if(n2!=0){
						r=n1/n2;
						printf("%f / %f = %f\n",n1,n2,r);
					}else{
						printf("Erro! Divisao por zero\n");
					}
					break;
				case 5:
					printf("Saindo ...\n");
					break;	
			}
			
		}else{
			printf("Erro! Nao tem esta opcao\n");
		}
		getch();
	}while(opcao!=5);
	
	
	return 0;
}