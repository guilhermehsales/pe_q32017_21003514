#include <stdio.h>
#include <stdlib.h>

int main(){

	char entrada[255];

	fgets(entrada, 255, stdin);

	int cont = 0;
	char letra;

	for(int i=0; entrada[i]!= '\0'; i++){
		
		letra = entrada[i];

		if (letra == 'a' || letra == 'e' || letra == 'i'|| letra == 'o' || letra == 'u'){
			cont++;
		}
	}

	printf("%d\n", cont);

	return(0);
}