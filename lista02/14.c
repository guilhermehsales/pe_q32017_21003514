#include <stdio.h>
#include <math.h>

int inverter (int a, int b)
{
	if(a < 1) return b;
	b *= 10;
	return inverter (a/10, b + (a%10));
}

int main(){
	
	int a, a_invertido;
	
	scanf("%d", &a);
	
	a_invertido = inverter(a, 0);

	if (a == a_invertido){
		printf("sim\n");
	}
	else{
		printf("nao\n");
	}
	return 0;
}