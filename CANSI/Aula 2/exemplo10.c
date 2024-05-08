// máquinas
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qntmaq, qntcomp20, qntcomp1, qntcomp5, res;
	
	printf("Quantas maquinas serao vendidas? ");
	scanf("%i",&qntmaq);
	fflush(stdin);
	
	qntcomp20=qntmaq*1;
	qntcomp1=qntmaq*2;
	qntcomp5=qntmaq*3;

    res=(qntcomp20*1500)+(qntcomp1*300)+(qntcomp5*600);

	printf("Deve ser comprado %i motores de 20 CV, %i de 1 CV e %i de 5 CV\n",qntcomp20, qntcomp1, qntcomp5);
	printf("O valor total da compra de motores eh de: %i",res);
	
	return 0;
}

//CORREÇÃO
/*
1] - Adicao
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
*/