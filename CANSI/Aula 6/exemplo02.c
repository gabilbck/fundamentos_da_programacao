/*
Como fazer a soma de duas matrize 3x3?
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int mA[3][3], mB[3][3], mS[3][3];
	
	// entrada
	printf("Dados matriz A\n\n");
	for(int li=0;li<3;li++){
		for(int co=0;co<3;co++){
			printf("Digite [%i,%i]: ",li,co);
			scanf("%i",&mA[li][co]);
			fflush(stdin);
		}
	}
	printf("\n\nDados matriz B\n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite [%i,%i]: ",i,j);
			scanf("%i",&mB[i][j]);
			fflush(stdin);
		}
	}
	
	
	// processamento
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mS[i][j]=mA[i][j]+mB[i][j];
		}
	}
	
	// saída
	printf("\n\nDados matriz S\n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i\t",mS[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}