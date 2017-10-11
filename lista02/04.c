#include <stdio.h>

float soma (float x, float y)
{
	float result = x + y;
	return result;
}

float sub (float x, float y)
{
	float result = x - y;
	return result;
}

float mult (float x, float y)
{
	float result = x * y;
	return result;
}

float div (float x, float y)
{
	float result = x / y;
	return result;
}

float pot (float x, float y)
{
	int cont=0;
	float result=1;
	while (cont<y){
		result *= x;
		cont += 1;
	}
	return result;
}


int main(){
	
	int opcao;
	float x, y, resultado;
	
	scanf("%d %f %f", &opcao, &x, &y);

	if(opcao == 1){
		resultado = soma(x, y);
	}
	else if(opcao == 2){
		resultado = sub(x, y);
	}
	else if(opcao == 3){
		resultado = mult(x, y);
	}
	else if(opcao == 4){
		resultado = div(x, y);
	}
	else if(opcao == 5){
		resultado = pot(x, y);
	}

	printf("%f\n", resultado);

	return 0;
}