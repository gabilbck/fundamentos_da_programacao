// SEI LÁ TAMBÉM

/* 3. Faça um programa que leia dez números inteiros e
calcule a diferença entre o maior e o menor número do conjunto.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	//variáveis
	int numero, menor, maior, i;
	
	//entrada
    for (i=1; i<=10; i++) {
        printf("Digite %i numero: ",i); //digite 1 numero, [...] 2 [...], ...
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

/*
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
*/