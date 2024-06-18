#include <stdio.h>
#include <stdlib.h>

// Protótipo de Funções
void reajuste_data(int d, int m, int a); //vars locais, ele recebe da main, na mesma ordem

// Função Principal
int main(void){
	// Variáveis
	int dia, mes, ano;
	
	printf("Digite o data (d/m/a):");
	scanf("%i%*c%i%*c%i",&dia,&mes,&ano);
	fflush(stdin);
	printf("Sua data e %i/%i/%i",dia,mes,ano);
	reajuste_data(dia,mes,ano);
	return 0;
}

// Outras Funções
void reajuste_data(int d, int m, int a){
	d+=5;
	if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10) && d>31){
		d-=31; // d=d-31, dia vai ter só o valor adicionado, como se "resetasse" o mês 
		m++; // add outro mês
	} else if((m==4 || m==6 || m==9 || m==11) && d>30){
		d-=30;
		m++;
	} else if(m==2 && ((a%4==0 && a%100!=0) || (a%400==0) && d>29)){
		d-=29;
		m++;
	}else if(m==2 && d>28){
		d-=28;
		m++;
	}else if(m==12 && d>31){
		d-=31;
		m=1;
		a++;
	}
	printf("\n\nA nova data e %i/%i/%i\n",d,m,a);
}