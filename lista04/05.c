#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;


ulint f1(ulint x)
{
	ulint i;
	while(x > 0){
		i += (x % 2);
		x /= 2;
	}
	return i;
}

ulint f2(ulint x)
{
	ulint i=0;
	while(x > 0){
		i += (x&1);
		x >> 1;
	}
	return i;
}

int main(void){

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint x;

	scanf("%lu", &x);

	/*VERSAO NORMAL*/
	tempo_init = clock();
	f1(x);
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);


	/*VERSAO BITWISE*/
	tempo_init = clock();
	f2(x);
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}