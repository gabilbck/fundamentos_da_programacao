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