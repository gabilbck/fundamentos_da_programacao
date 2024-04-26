// 8. Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1, n2, n3;

    printf("Digite um numero: ");
    scanf("%i",&n1);
    fflush(stdin);

    printf("Digite outro numero: ");
    scanf("%i",&n2);
    fflush(stdin);

    printf("Digite mais um numero: ");
    scanf("%i",&n3);
    fflush(stdin);

    if (n1<n2 && n1<n3){ //Se N1 for menor que os outros
    		printf(" %i\n",n1);
    	if(n2<n3){ 
    		printf(" %i\n %i\n",n2,n3); // N1, N2, N3
		}else{
			printf(" %i\n %i\n",n3,n2); // N1, N3, N2
		}
    } else if(n2<n1 && n2<n3){ //Se N2 for menor que os outros
    	printf(" %i\n",n2);
    	if(n1<n3){
    		printf(" %i\n %i\n",n1,n3); // N2, N1, N3
		} else{
			printf(" %i\n %i\n",n3,n1); // N2, N3, N1
		}
	} else{ //Se N3 for menor que os outros
		printf(" %i\n", n3);
		if(n1<n2){
			printf(" %i\n %i\n",n1,n2); // N3, N1, N2
		} else{
			printf(" %i\n %i\n",n2,n1); // N3, N2, N1
		}
	} 
    return 0;
}

// OU

#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1, n2, n3, aux;

    printf("Digite um numero: ");
    scanf("%i",&n1);
    fflush(stdin);

    printf("Digite outro numero: ");
    scanf("%i",&n2);
    fflush(stdin);

    printf("Digite mais um numero: ");
    scanf("%i",&n3);
    fflush(stdin);

    if(n1>n2){
    	aux=n1; n1=n2; n2=aux;
	}
	if(n1>n3){
		aux=n1; n1=n3; n3=aux;
	}
	if(n2>n3){
		aux=n2; n2=n3; n3=aux;
	}
	
	printf("%i %i %i\n",n1,n2,n3);
    return 0;
}