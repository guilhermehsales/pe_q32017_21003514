#include <stdio.h>
#include <stdlib.h>

int main(){

	int v1[3]={0}, v2[3]={0}, v3[3]={0};

	scanf("%d %d %d ", &v1[0], &v1[1], &v1[2]);
	scanf("%d %d %d ", &v2[0], &v2[1], &v2[2]);
	scanf("%d %d %d", &v3[0], &v3[1], &v3[2]);
	
	printf("\n");

	for(int i=0; i<=2; i++){
		printf("%d %d %d\n", v1[i], v2[i], v3[i]);
	}

	printf("\n");

	return 0;
}