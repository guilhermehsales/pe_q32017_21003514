#include <stdio.h>
#include <math.h>
/*Exemplo de entradas
*Tipo CONVERSAO:
	TEMPERATURA = 1
	BASE NUMERICA = 2
*Tipo entrada/saida:
	TEMP:
		CELSIUS = 1
		FAHRENHEIT = 2
		KELVIN = 3
	BASE NUMERICA:
		DECIMAL = 1
		BINARIO = 2
*EXEMPLO :
	(CONVERSAO) (ENTRADA) (SAIDA) (NUMERO)
	  Temp(1)    Fahr(2)  Kelv(3)    58
	Digitar:	1...2...3...58
	(colocar espaco no lugar de ...)
*A CONVERSAO DE BINARIO<>DECIMAL SO FUNCIONAL PARA
DECIMAIS MENORES DE 256 E BINARIOS COM ATE 8 BITS*/
/*CELSIUS_FAHRENHEIT_KELVIN*/
float cel_fah (int n)
{
	return ((n * 1.8) + 32);
}
float cel_kel (int n)
{
	return (n + 273.15);
}
float fah_cel (int n)
{
	return ((n - 32) / 1.8);
}
float fah_kel (int n)
{
	float kel;
	kel = cel_kel(fah_cel(n));
	return kel;
}
float kel_cel (int n)
{
	return (n - 273.15);
}
float kel_fah (int n)
{
	float fah;
	fah = cel_fah(kel_cel(n));
	return fah;
}

/*DECIMAL_BINARIO*/
float dec_bin (int n)
{
	float bin=0, cont=0;
	while(n!=0){
		bin += ((n%2) * pow(10, cont));
		n = floor(n/2);
		cont++;
	}
	return bin;
}
float bin_dec (int n)
{
	int dec=0, cont=0;
	while(n!=0){
		if(n%10 == 1){
			dec += (pow(2, cont));
		}
		n = floor(n/10);
		cont++;
	}
	return dec;
}

/////////////////////////////////////
////////////*FUNCAO MAIN*////////////
/////////////////////////////////////
int main(){
	
	/*Entradas de opcoes e valor*/
	float conv, input, output, value, answer;
	
	scanf("%f %f %f %f", &conv, &input, &output, &value);

	// printf("\n%.2f %.2f %.2f %.2f\n", conv, input, output, value);

	/*Conversao de temperatura*/
	if(conv == 1){
		/*Se entrada e saida for igual*/
		if(input == output){
			answer = value;
		}
		/*Se entrar celsius e sair fahrenheit*/
		else if(input == 1 && output == 2){
			answer = cel_fah(value);
		}
		/*Se entrar celsius e sair kelvin*/
		else if(input == 1 && output == 3){
			answer = cel_kel(value);
		}
		/*Se entrar fahrenheit e sair celsius*/
		else if(input == 2 && output == 1){
			answer = fah_cel(value);
		}
		/*Se entrar fahrenheit e sair kelvin*/
		else if(input == 2 && output == 3){
			answer = fah_kel(value);
		}
		/*Se entrar kelvin e sair celsius*/
		else if(input == 3 && output == 1){
			answer = kel_cel(value);
		}
		/*Se entrar kelvin e sair fahrenheit*/
		else if(input == 3 && output == 2){
			answer = kel_fah(value);
		}
		printf("%.2f\n", answer);
	}
	/*Conversao de base numerica*/
	else if(conv == 2){
		/*Se entrada e saida for igual*/
		if(input == output){
			answer = value;
		}
		/*Se entrar decimal e sair binario*/
		else if(input == 1 && output == 2){
			answer = dec_bin(value);
		}
		/*Se entrar binario e sair decimal*/
		else if(input == 2 && output == 1){
			answer = bin_dec(value);
		}
		printf("%.f\n", answer);
	}

	return 0;
}