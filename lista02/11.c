#include <stdio.h>
#include <math.h>

/*RECURSAO DECIMAL PARA BINARIO*/
int dec_bin_rec (int bin, int n, int cont)
{
	if(n == 0) return bin;
	double soma, new_n = (n%2);
	soma = bin + (new_n* pow(10, cont));
	return dec_bin_rec(soma, floor(n/2), ++cont);
}
int dec_bin (int valor)
{
	return dec_bin_rec(0, valor, 0);
}

/*RECURSAO BINARIO PARA DECIMAL*/
int bin_dec_rec (int dec, int n, int cont)
{
	if(n == 0) return dec;
	double soma;
	if((n%10)){
		soma = dec + (pow(2, cont));
	}
	return bin_dec_rec(soma, (n/10), ++cont);
}
int bin_dec (int valor)
{
	return bin_dec_rec(0, valor, 0);
}

int main(){
	
	int valor, answer, conv;
	
	scanf("%d %d", &valor, &conv);
	if(conv == 1){
		answer = dec_bin(valor);
	}
	else if(conv == 2){
		answer = bin_dec(valor);
	}
	
	printf("%d\n", answer);
	
	return 0;
}