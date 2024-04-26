//Salário Líquido
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float salariob, salariol, ir, inss, sindicato;
	
	printf("Qual eh seu salario bruto atual? ");
	scanf("%f",&salariob);
	fflush(stdin);
	
	ir=0.15*salariob;
	inss=0.11*salariob;
	sindicato=0.03*salariob;
	salariol=salariob-(ir+inss+sindicato);
	
	printf("Salário Bruto   : R$ %f\n",salariob);
	printf("(-)IR           : R$ %f\n",ir);
	printf("(-)INSS         : R$ %f\n",inss);
	printf("(-)Sindicato    : R$ %f\n",sindicato);
	printf("Salario Liquido : R$ %f\n",salariol);
	
	return 0;
}