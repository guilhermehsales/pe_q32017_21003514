#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
float mediana (int n, int v1[])
{
	int valor;
	if(n%2 == 0){
		n /= 2;
		valor = (v1[n-1] + v1[n]) / 2;
	} else {
		n /= 2;	
		valor = v1[n];
	}
	return valor;
}

int main(){

	int n;
	float resultado;

	scanf("%d", &n);

	int v1['n']={0};
	
	for(int i=0; i<n; i++){
		scanf("%d", &v1[i]);
	}

	qsort(v1, n, sizeof(int), cmpfunc);

	resultado = mediana(n, v1);

	printf("%.2f\n", resultado);

	return 0;
}