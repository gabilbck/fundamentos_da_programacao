// 14. Faça um programa que leia um número e exiba o dia correspondente da semana. 
// (1-Domingo, 2- Segunda,etc.), se digitar outro valor deve aparecer valor inválido. 
#include <stdio.h>
#include <stdlib.h>

int main (void){
    char op;
    
    printf("Digite o numero correspondente ao dia da semana: \n\n");
    scanf("%c",&op);
    fflush(stdin);
    
    switch (op){
        case '1':
            printf("Domingo");
        break;
        case '2':
            printf("Segunda-feira");
        break;
        case '3':
            printf("Terca-feira");
        break;
        case '4':
            printf("Quarta-feira");
        break;
        case '5':
            printf("Quinta-feira");
        break;
        case '6':
            printf("Sexta-feira");
        break;
        case '7':
            printf("Sabado");
        break;
        default:
            printf("Valor inválido");
        break;
    }
    
    return 0;
}