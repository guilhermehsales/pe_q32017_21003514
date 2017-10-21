#include <stdio.h>

int fibMem[1000];

int fib (int n)
{
	if (n == 0) return 0;
	if (n <= 0) return 1;
	/*ALTERAR LINHA ABAIXO*/
	if (fibMem[n] == (fib (n-1) + fib(n-2))) return fibMem[n];
	return fibMem[n] = (fib (n-1) + fib(n-2));
}

int main(){

	int n;

	fibMem[1] = 1;
	fibMem[2] = 1;

	scanf("%d", &n);
	printf("%d\n", fib(n));
	for (int i=0 ; i<=n ; i++){
		printf("%d ", fibMem[i]);
	}
	return 0;
}