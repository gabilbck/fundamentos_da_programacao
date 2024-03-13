/*
FUNDAMENTOS DA PROGRAMAÇÃO - MANFRED
AULA 12/03/2014


======= Cartão de Visita =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	printf("------------------------------------------\n");
	printf("|            Seja Bem-vindo(a)           |\n");
	printf("|                                        |\n");
	printf("| Nome:     Fulaninha Meneguel           |\n");
	printf("| Contato:  12 1234-5678                 |\n");
	printf("| E-mail:   fulaninha.meneguel@gmail.com |\n");
	printf("| Site:     www.fulaninha-meneguel.com   |\n");
	printf("------------------------------------------\n");
	
	return 0;
}


======= Fahrenheit -> celcius =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float celcius, fahrenheit;
	
	printf("Insira a temperatura em graus Fahrenheit: ");
	scanf("%f",&fahrenheit);
	fflush(stdin);
	
	celcius=5*(fahrenheit-32)/9;
	
	printf("A temperatura em graus celcius eh: %f",celcius);
	
	return 0;
}


======= Transformações de números e expressões =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int num1, num2; //numéros inteiros
	float num3, a, b, c; //números reais
	
	printf("Insira um numero inteiro: ");
	scanf("%i",&num1);
	fflush(stdin);
	printf("Insira outro numero inteiro: ");
	scanf("%i",&num2);
	fflush(stdin);
	printf("Insira um numero real: ");
	scanf("%f",&num3);
	fflush(stdin);
	
	a=(num1*2)+((float)num2/2); // para transformar o int em float
	b=(num1*3)+num3;
	c=(num3*num3*num3);
	
	printf("O produto do dobro do primeiro com metade do segundo: %f",a);
	printf("\n");
	printf("A soma do triplo do primeiro com o terceito: %f",b);
	printf("\n");
	printf("O terceiro elevado ao cubo: %f",c);
	
	return 0;
}


======= área do circulo =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float raio, res; //posso colocar pi=3.14
	
	printf("Digite o raio do circulo: ");
	scanf("%f",&raio);
	fflush(stdin);
	
	res=3.14*raio*raio;
	
	printf("Area eh igual a: %f",res);
	
	return 0;
}


======= metros para centimetros =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float metro, centimetro;
	
	printf("Digite o valor em metros: ");
	scanf("%f",&metro);
	fflush(stdin);
	
	centimetro=metro*100;
	
	printf("O valor em centimetros eh: %.1f cm",centimetro);

    //ou faço direto: printf("O valor em centimetros eh: %f",metro*100);
	
	return 0;
}


======= Soma =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, soma;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	fflush(stdin);
	
	soma=n1+n2;
	
	printf("A soma dos numeros eh: %f",soma);
	
	return 0;
}


======= Média de notas =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, n3, n4, media;
	
	printf("Insira sua primeiro nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Insira sua segunda nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Insira sua terceira nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	printf("Insira sua quarta nota: ");
	scanf("%f",&n4);
	fflush(stdin);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("Sua media eh: %f",media);
	
	return 0;
}


======= Salário =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float ganho, horas, salario;
	
	printf("Quanto eh seu ganho por hora de trabalho? ");
	scanf("%f",&ganho);
	fflush(stdin);
	printf("Quantas horas voce trabalhou neste mes? ");
	scanf("%f",&horas);
	fflush(stdin);
	
	salario=ganho*horas;
	
	printf("O seu salario do mes eh: %f",salario);
	
	return 0;
}


======= Salario por dias trabalhados e desconto =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float ndias, salario, desconto, liquido;
	
	printf("Numeros de dias trabalhados: ");
	scanf("%f",&ndias);
	fflush(stdin);
	
	salario=ndias*25;
	desconto = (salario/100) * 8;
	liquido = salario - desconto;
	
	printf("O seu salario do mes eh: %f",liquido);
	
	return 0;
}


======= máquinas =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qntmaq, qntcomp20, qntcomp1, qntcomp5, res;
	
	printf("Quantas maquinas serao vendidas? ");
	scanf("%i",&qntmaq);
	fflush(stdin);
	
	qntcomp20=qntmaq*1;
	qntcomp1=qntmaq*2;
	qntcomp5=qntmaq*3;

    res=(qntcomp20*1500)+(qntcomp1*300)+(qntcomp5*600);

	printf("Deve ser comprado %i motores de 20 CV, %i de 1 CV e %i de 5 CV\n",qntcomp20, qntcomp1, qntcomp5);
	printf("O valor total da compra de motores eh de: %i",res);
	
	return 0;
}


======= Quantidade de Latas =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qntlatas;
	float largura, altura, mqua, mqual;
	
	printf("Qual a largura da parede em metros? ");
	scanf("%f",&largura);
	fflush(stdin);
	printf("Qual a altura da parede em metros? ");
	scanf("%f",&altura);
	fflush(stdin);
	
	mqua=largura*altura; //descubro metros²
	mqual=mqua*3; //descubro quantos litros uso pelo metro²
	qntlatas=mqual/3.6; //divido os litros usados pela quantidade cheia de uma lata Ç3,6)
	
	printf("Devem ser compradas %i latas.",qntlatas);
	
	return 0;
}


======= Salário Líquido =======
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float salariob, salariol, ir, inss, sindicato;
	
	printf("Qual eh seu salario bruto atual? ");
	scanf("%f",&salariob);
	fflush(stdin);
	
	ir=0.15*salariob;
	inss=0.11*salariob;
	sindicato=0.03*salariob;
	salariol=salariob-(ir+inss+sindicato);
	
	printf("Salário Bruto   : R$ %f\n",salariob);
	printf("(-)IR           : R$ %f\n",ir);
	printf("(-)INSS         : R$ %f\n",inss);
	printf("(-)Sindicato    : R$ %f\n",sindicato);
	printf("Salario Liquido : R$ %f\n",salariol);
	
	return 0;
}

*/