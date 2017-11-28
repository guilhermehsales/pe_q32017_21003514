#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{	
	int n = x % 2;
	return n;
}

ulint f2(ulint x)
{
	return x & 1;
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