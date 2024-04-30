// NÃO SEI

/* 2. Faça um programa que peça dois números inteiros 
e gere os números pares que estão no intervalo entre eles.*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// int main (void){
//     // variáveis
// 	int n1, n2, i, flage;
	
// 	// entrada de dados
// 	printf("Digite um numero: ");
// 	scanf("%i",&n1); //pede o n1
// 	fflush(stdin);
	
// 	printf("Digite outro numero: ");
// 	scanf("%i",&n2); //pede o n2
// 	fflush(stdin);
	
// 	// saída de dados
//     if(!n1%2==0){ n1+1; }
//     if(!n2%2==0){ n2+1; }
// 	if(n1<n2){
// 		for(i=n1+2;i>n2;i+2){
// 			printf("%i, ",i);
// 			flage=1; //há intervalo
// 		}
// 	} else{
// 	 	for(i=n1-2;i>n2;i-2){
// 			printf("%i, ",i);
// 			flage=1; //há intervalo
// 		}
// 	}
// 	if (!flage){
// 		printf("Nao ha intervalo"); //flage=0, falso
// 	}
// 	return 0;
// }