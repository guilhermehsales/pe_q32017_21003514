#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{	
	if(x % 2 == 1){
		if(x == 1) return 1;
		else return 0;
	}
	return f1(x/2);
}

ulint f1(ulint x)
{
	if (x&1) return x==1? 1 : 0;
	return f1(x >> 1);
}


int main(void){

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	srand(1000);

	int i = rand()%1001;

	/*VERSAO NORMAL*/
	tempo_init = clock();
	f1(i);
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);


	/*VERSAO BITWISE*/
	tempo_init = clock();
	f2(i);
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}