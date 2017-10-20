#include <stdio.h>
#include <math.h>

/*Saida igual da lista 1, com o codigo todo com funcoes*/

double descontos (double base, double faltas) /*Calculo desconto*/
{
	double valor_dia = base / 20;
	double desc = faltas * valor_dia;

	return desc;
}
double acrescimos (double base, double hextra) /*Calculo acrescimo*/
{
	double valor_hora = base / 160;
	double acres = (hextra * (valor_hora + 40));
	
	return acres;
}
double salariofinal (int base, double desconto, double acrescimo)
{
	return (base - desconto + acrescimo);
}

int main(){
	
	int cargo, base, faltas, hextra;
	float desconto, acrescimo, salario;

	scanf("%d %d %d", &cargo, &faltas, &hextra);
	
	//char nome_cargo[5][15] = {"Diretor", "Gerente", "Engenheiro", "Tecnico", "Operador"};
	
	//printf("cargo        : ");
	
	//cargo--;
	//printf("%s\n", nome_cargo[cargo]);
	//cargo++;

	if(cargo == 1){
		base = 10000;
		desconto = descontos(base, faltas);
		acrescimo = acrescimos(base, hextra);

	}
	else if(cargo == 2){
		base = 8000;
		desconto = descontos(base, faltas);
		acrescimo = acrescimos(base, hextra);
	}
	else if(cargo == 3){
		base = 5000;
		desconto = descontos(base, faltas);
		acrescimo = acrescimos(base, hextra);
	}
	else if(cargo == 4){
		base = 3000;
		desconto = descontos(base, faltas);
		acrescimo = acrescimos(base, hextra);
	}
	else if(cargo == 5){
		base = 2000;
		desconto = descontos(base, faltas);
		acrescimo = acrescimos(base, hextra);
	}

	salario = salariofinal(base, desconto, acrescimo);

	//printf("# de faltas  : %d\n", faltas);
	//printf("# horas-extra: %d\n", hextra);
	//printf("descontos    : %.f\n", desconto);
	//printf("acrescimos   : %.f\n", acrescimo);
	//printf("salario      : %.f\n\n", salario);

	printf("%.f\n", salario);

	return 0;
}
