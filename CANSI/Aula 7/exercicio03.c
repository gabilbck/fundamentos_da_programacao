/*
3. Fazer um programa que possibilite várias opções de cálculos a partir de um 
menu. O programa chamará a função correspondente a cada cálculo.
[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f ] FIM
Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void fa(void);
void fb(void);
void fc(void);
void fd(void);

int main(void){
	// variáveis
	char opcao;
	
	// entrada
	do{
		printf("[a] S = 1/1 + 3/2 + 5/3+...........+ 99/50\n");
		printf("[b] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
		printf("[c] S = 1000/1 - 997/2 + 994/3............\n");
		printf("[d] S = 480/10 - 475/11 + 470/12 - .......\n");
		printf("[f] FIM\n");
		printf("Digite uma opcao: ");
		scanf("%c",&opcao);
		fflush(stdin);
		switch(opcao){
			case 'a':
				fa();
				break;
			case 'b':
				fb();
				break;
			case 'c':
				fc();
				break;
			case 'd':
				fd();
				break;
		}
		
	}while(opcao != 'f');
	return 0;
}


// funções
void fa(void){
	//S = 1/1 + 3/2 + 5/3+...........+ 99/50
	float s=0;
	for(int i=1, j=1; i<=99;i+=2,j++){
		s+=(float)i/j;
	}
	printf("S = %f\n",s);
}

void fb(void){
	//S = 1/1 - 2/2 + 3/3 -..........- 10/10
	float s=0;
	for(int i=1; i<=10;i++){
		if(i%2==1){
			s+=(float)i/i;
		}else{
			s-=(float)i/i;
		}
	}
	printf("S = %f\n",s);
}

void fc(void){
	//S = 1000/1 - 997/2 + 994/3............
	float s=0;
	for(int i=1000, j=1; j<=20;i-=3, j++){
		if(j%2==1){
			s+=(float)i/j;
		}else{
			s-=(float)i/j;
		}
	}
	printf("S = %f\n",s);
}

void fd(void){
	//S = 480/10 - 475/11 + 470/12 - .......
	float s=0;
	for(int i=480, j=10, cont=1; cont<=20;i-=5, j++, cont++){
		if(j%2==0){
			s+=(float)i/j;
		}else{
			s-=(float)i/j;
		}
	}
	printf("S = %f\n",s);
}