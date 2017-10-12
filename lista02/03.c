#include <stdio.h>
#include <math.h>

int main(){
	
	long double a, b, t, p, a1, pi;
	
	a = 1;
	b = 1 / (sqrt(2));
	t = 0.25;
	p = 1;
	a1 = 0;

	int i=0;

	while(i < 9){
		
		a1 = (a + b) / 2;
		b = sqrt(a * b);
		t = t - (p * (pow((a - a1), 2)));
		p = 2 * p;
		a = a1;

		i++;
	}

	pi = (pow((a + b), 2)) / (4 * t);

	printf("\nO valor de PI eh : %.20Lf\n\n", pi);

	return 0;
}