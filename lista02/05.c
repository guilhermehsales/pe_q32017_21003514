#include <stdio.h>

int fatorial (int n)
{
	int fat=1;
	
	while(n>0){
		fat *= n;
		n--;
	}

	return fat;
}

int coefbinomial (int n, int k)
{
	int binomio;

	binomio = fatorial(k);
	binomio *= fatorial(n-k);
	binomio = fatorial(n) / binomio;

	return binomio;
}


int main(){
	
	int n, k;
	int resultado;
	
	scanf("%d %d", &n, &k);
	resultado = coefbinomial(n, k);
	printf("%d\n", resultado);

	return 0;
}