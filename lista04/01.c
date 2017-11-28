#include <stdio.h>
#include <math.h>

typedef struct coord{
	float x;
	float y;
	float z;
}coord;

float distcalc (coord a, coord b)
{
	float temp1, temp2, temp3;

	temp1 = pow((b.x - a.x), 2);
	temp2 = pow((b.y - a.y), 2);
	temp3 = pow((b.z - a.z), 2);

	return sqrt(temp1 + temp2 + temp3);
}

int main(){

	float distancia;
	coord p1, p2;

	scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
	scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));

	printf("%.2f\n", distcalc(p1, p2));

	return 0;
}