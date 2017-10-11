#include <stdio.h>
#include <math.h>

double raizdelta (double a, double b, double c)
{
	double raiz, delta;

	delta = 4 * a * c;
	delta = pow(b,2) - delta;
	raiz = sqrt(delta);

	return raiz;
}

double bhaskara (double a, double b, double raiz)
{

	double equacao;

	equacao = - b + raiz;
	equacao /= 2*a;

	return equacao;
}


int main(){
	
	double a, b, c;
	double rt, r1, r2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	rt = raizdelta(a, b, c); 
	r1 = bhaskara(a, b, -rt);
	r2 = bhaskara(a, b, rt);
	printf("%.3f %.3f\n", r1, r2);

	return 0;
}