#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct time{
	int m;
	int s;
	int d;
}time;

double timetodec(time x){
	int result;
	result = (x.m * 6000) + (x.s * 100) + x.d;
	return result;
}

time diferenca (time a, time b)
{
	int adec, bdec, dif, i, conta=0;
	time ans;

	adec = timetodec(a);		/*Converte de tempo pra um decimal unico*/
	bdec = timetodec(b);		/*Converte de tempo pra um decimal unico*/
	
	dif = bdec - adec;

	if(dif<0){					/*Se for diferenca negativa ele*/
		dif *= (-1);			/*torna positiva e indica no minuto (-)*/
		printf("-");
	}

	ans.d = dif % 100;
	dif /=100;

	for(i=1; dif>=60; i++){
		conta += (60 * i);
		dif -= conta;
	}

	i--;

	if(i>0) ans.m *= i;

	ans.s = dif;

	return ans;
}

int main(){

	time t1, t2, resp;

	scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
	scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));

	resp = diferenca(t1, t2);

	printf("%dm %ds %d\n", resp.m, resp.s, resp.d);

	return 0;
}