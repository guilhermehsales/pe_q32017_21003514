#include <stdio.h>

int main(){
	float x, y, z, v;
	scanf("%f %f %f", &x, &y, &z);
	v = x * y * z;
	printf("%.2f\n", v);
	return 0;
}