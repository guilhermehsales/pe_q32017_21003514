#include <stdio.h>
#include <math.h>

float potencia (float pot, float x, float y)
{	
	if (y == 1) return pot; 
	return potencia((pot * x), x, y-1);
}

int main(){

	float x, y, resultado;

	scanf("%f %f", &x, &y);

	resultado = potencia(x, x, y);

	printf("%.f\n", resultado);

	return 0;
}