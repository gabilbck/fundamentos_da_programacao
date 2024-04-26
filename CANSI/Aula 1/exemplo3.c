int main (void){
	int idade; //%i
	float altura; //%f
	char letra; //%c
	
	idade = 18; //var recebe valor
	altura = 1.62;
	letra = 'G';
	
	printf("Idade = %i\n",idade);
	printf("Altura = %.2f\nLetra = %c\n",altura, letra);
    
    // %n -> chama a variavel tipada
	// %.2f -> imprime com 2 casas decimais
	
	return 0;
}