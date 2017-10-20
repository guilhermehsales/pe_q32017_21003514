#include <stdio.h>

float volume(float x, float y, float z)
{
	return (x * y * z);
}

int main(){
	
	float x, y, z, v;
	
	scanf("%f %f %f", &x, &y, &z);
	
	v = volume (x, y, z);
	
	printf("%.2f\n", v);
	
	return 0;
}