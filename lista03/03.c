#include <stdio.h>
#include <stdlib.h>

int main(){

	int v1[5]={0}, v2[5]={0}, v3[5]={0};

	scanf("%d %d %d %d %d", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
	scanf("%d %d %d %d %d", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
	
	for(int i=0; i < 5; i++){
		v3[i] = v1[i] + v2[i];
	}

	for(int i=0; i<5; i++){
		printf("%d ", v3[i]);
	}

	printf("\n");

	return 0;
}