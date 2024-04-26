// 7. Faça um programa que verifique se uma letra digitada é vogal ou consoante.
#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	if ((letra>='a' && letra<='z') || (letra>='A' && letra<='Z')){
		if(letra>='A' && letra<='Z'){
			letra=letra+('a'-'A');
		}
		switch(letra){
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("E uma vogal\n");
				break;
			default:
				printf("E uma consoante\n");
		}
	}else{
		printf("Nao e uma letra");
	}
	
	return 0;
}