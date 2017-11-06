#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, b, cont=1;

	scanf("%d", &a);

	int v1['a']={0};
	
	for(int i=0; i<a; i++){
		scanf("%d", &v1[i]);
	}

	for(int j=0; j<a; j++){
		
		for(b = j+1; b<a; b++){
			
			if(v1[j] == v1[b] && v1[b] != 0){
				v1[b] = 0;
				cont++;
			}

		}
		
		if(cont > 1){
			printf("%d-%d ", v1[j], cont);
			cont = 1;
		}
	}

	printf("\n");

	return 0;
}