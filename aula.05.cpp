/*
FUNDAMENTOS DA PROGRAMAÇÃO - MANFRED
AULA 23/04/2024

======= FOR =======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	int numero;
	
	for(numero=1;numero<=10;numero++){
		printf("%i, ",numero);
	}
	
	return 0;
}

====== WHILE ======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	int numero;
	
	numero=1;
	while(numero<=10){
		printf("%i, ",numero);
		numero++;
	}
	
	return 0;
}

====== DO WHILE ======
#include <stdio.h> //entrada e saída padrão
#include <stdlib.h> // padrão das bibliotecas

int main (void){
	//variáveis
	int numero;
	
	numero=1;
	do{
		printf("%i, ",numero);
		numero++;
	}while(numero<=10);
	
	return 0;
}

===== =====
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

===== Intervalo de números =====
//1.  Faça um programa que peça dois números inteiros 
e gere os números inteiros que estão no intervalo entre eles.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	// variáveis
	int n1, n2, i;
	
	printf("Digite um numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	if(n1>n2){
		n2++;
		for(i=n2;i<n1;i++){
			printf("%i, ",i);
		}
	} else if(n2>n1){
		n1++;
	 	for(i=n1;i<n2;i++){
			printf("%i, ",i);
		}
	} else{
		printf("Os numeros sao iguais");
	}
	return 0;
}

===== outra versão de intervalo =====
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	// variáveis
	int n1, n2, i, flage;
	
	// entrada de dados
	printf("Digite um numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// saída de dados
	if(n1<n2){
		for(i=n1+1;i<n2;i++){
			printf("%i, ",i);
			flage=1;
		}
	} else{
	 	for(i=n2-1;i>n1;i--){
			printf("%i, ",i);
			flage=1;
		}
	}
	if (!flage){
		printf("Nao ha intervalo");
	}
	return 0;
}

==== minha ver maior - menor ====
// Faça um programa que leia dez números inteiros e calcule a diferença entre o maior e o menor número do conjunto
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int numeros[10]; //cria um array de numeros digitados
    int i, maior, menor;
    
    printf("Digite dez umeros inteiros:\n");
    for (i=0; i<10; i++) {
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    }	
	maior = menor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }
    printf("A difereca ntre o maior e o menor numero e: %d\n", maior - menor);
    
	return 0;
}

===== versão mais de boa =====
#include <stdio.h>
#include <stdlib.h>

int main (void){
	//variáveis
	int numero, menor, maior, i;
	
	//entrada
    for (i=0; i<10; i++) {
        printf("Digite %i numero: ",i);
        scanf("%i",&numero);
        fflush(stdin);
        if(i==1){
        	maior=numero;
        	menor=numero;
		}else{
			if(numero<menor){
				menor=numero;
			}
			if(numero>maior){
				maior=numero;
			}
		}
    }	
	
	//saída de dados
	printf("A diferenca e %i\n",i);
    
	return 0;
}


===== =====
// 2. Faça um programa que peça dois números 
// inteiros e gere os números pares que estão no intervalo entre eles.






*/