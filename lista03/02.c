#include <stdio.h>
#include <stdlib.h>

int cont_carac (char palavra[])
{
	int cont = 0;
	for(int i=0; palavra[i] != '\0'; i++){
		cont++;
	}
	/*Subtrai antes de enviar pois ele conta \0 tambem*/
	return --cont;
}


int main(){

	char entrada[255];
	char saida[255];
	int cont, tamanho;

	fgets(entrada, 255, stdin);

	/*Conta o numero de caracteres*/
	cont = cont_carac(entrada);
	
	/*Como eh vetor[n] comeca do 0 e vai ate n-1*/
	cont--;
	tamanho = cont;

	/*Pega o ultimo termo de entrada e poe como primeiro da saida*/
	for(int i=0; i <= tamanho; i++){
		saida[i] = entrada[cont];
		cont--;
	}

	printf("%s\n", saida);

	return(0);
}