// 13. Faça um programa que pergunte em que turno você estuda. 
// Peça para digitar M- matutino ou V-Vespertino ou N-Noturno.
// Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso. 
#include <stdio.h>
#include <stdlib.h>

int main (void){
    char op;
    
    printf("Digite a letra correspondente ao seu turno: \n\n");
    printf("M - matutino: \n");
    printf("V - Vespertino: \n");
    printf("N - Noturno: \n\n");
    scanf("%c",&op);
    fflush(stdin);
    
    switch (op){
        case 'm': case 'M':
            printf("Bom dia!");
        break;
        case 'v': case 'V':
            printf("Boa tarde!");
        break;
        case 'n': case 'N':
            printf("Boa noite!");
        break;
        default:
            printf("Escolha uma opcao valida!");
        break;
    }
    
    return 0;
}