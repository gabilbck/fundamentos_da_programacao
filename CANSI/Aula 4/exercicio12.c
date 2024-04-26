// 12.Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
//	a. Área Retângulo = base * altura
//	b. Área Triângulo = base * altura/2
//	c. Área do Círculo = 2 * pi * r * r
//	d. Área do quadrado = lado * lado
//	e. Área do trapézio = (lmaior + lmenor) * altura/2
//	f. Sair

// 12.Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
//	a. Área Retângulo = base * altura
//	b. Área Triângulo = base * altura/2
//	c. Área do Círculo = 2 * pi * r * r
//	d. Área do quadrado = lado * lado
//	e. Área do trapézio = (lmaior + lmenor) * altura/2
//	f. Sair
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char op;
    float res, base, altura, raio, lado, basema, baseme;
    
    printf("Digite um das opções abaixo:\n\n");
    printf("a - Area Retangulo\n");
    printf("b - Area Triangulo\n");
    printf("c - Area Círculo\n");
    printf("d - Area Quadrado\n");
    printf("e - Area Trapezio\n");
    printf("f - Sair\n\n");
    scanf("%c",&op);
    fflush(stdin);
    
    switch (op){
        case 'a':
            printf("Digite o valor da base: ");
            scanf("%f",&base);
            fflush(stdin);
            printf("Digite o valor da altura: ");
            scanf("%f",&altura);
            fflush(stdin);
            res=base*altura;
            printf("O Resultado e: %f",res);
        break;
        case 'b':
            printf("Digite o valor da base: ");
            scanf("%f",&base);
            fflush(stdin);
            printf("Digite o valor da altura: ");
            scanf("%f",&altura);
            fflush(stdin);
            res=base*altura/2;
            printf("O Resultado e: %f",res);
        break;
        case 'c':
            printf("Digite o valor do raio: ");
            scanf("%f",&raio);
            fflush(stdin);
            res=2*3.14*raio*raio;
            printf("O Resultado e: %f",res);
        break;
        case 'd':
            printf("Digite o valor do lado: ");
            scanf("%f",&lado);
            fflush(stdin);
            res=lado*lado;
            printf("O Resultado e: %f",res);
        break;
        case 'e':
            printf("Digite o valor da base maior: ");
            scanf("%f",&basema);
            fflush(stdin);
            printf("Digite o valor da base menor: ");
            scanf("%f",&baseme);
            fflush(stdin);
            printf("Digite o valor da altura: ");
            scanf("%f",&altura);
            fflush(stdin);
            res=(basema+baseme)*altura/2;
            printf("O Resultado e: %f",res);
        break;
        case 'f':
            printf("Você saiu!");
        break;
        default:
            printf("Insira uma opção válida!");
        break;
    }

    return 0;
}