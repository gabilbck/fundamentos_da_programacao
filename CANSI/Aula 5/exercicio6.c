/*6. Faça um programa que calcule o valor total investido e o custo médio por CD.
O usuário deverá informar a quantidade de CDs e o valor para em cada um.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i, qtd_cds;
	float valor_total = 0, valor_medio, valor_cd;
	
	// entrada
	printf("Digite a quantidade de CDs: ");
	scanf("%i",&qtd_cds);
	fflush(stdin);
	i=1;
	while(i<=qtd_cds){
		printf("Digite o valor do cd (%i): ",i);
		scanf("%f",&valor_cd);
		fflush(stdin);
		valor_total+=valor_cd;
		i++;
	}
	
	// procesamento 
	valor_medio = valor_total/qtd_cds;
	
	// saída
	printf("A media dos cds e R$ %.2f\n",valor_medio);
	printf("O total dos cds e R$ %.2f\n",valor_total);
	
	return 0;
}

//OUTRA VERSAO
/*

*/