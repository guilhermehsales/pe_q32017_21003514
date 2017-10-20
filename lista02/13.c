#include <stdio.h>
#include <math.h>

double m_d_c (int a, int b)
{
	if(b == 0) return a;
	return m_d_c(b, a%b);
}

int main(){
	
	int a, b;
	double mdc;
	
	scanf("%d %d", &a, &b);
	
	mdc = m_d_c(a,b);

	printf("%.f\n", mdc); 

	return 0;
}