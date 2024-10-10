#include <stdio.h>

int main(){
	int ano, anoA;
	float sal, per;
	
	printf("Salario em 2019 = 1015.00\n");
	
	printf("Informe o ano atual: ");
	scanf("%d", &ano);
	
	per = 1.5;
	sal = 1015;

	for(anoA = 2020; anoA <= ano; anoA++){
		per *= 2 ;
		
		sal = sal * (1 + per/100);
		
		
		printf("Percentual acumulado de aumento foi igual a %.2f\n", per);
		printf("Salario em %d foi igual a %.2f\n\n", anoA, sal);
		
	}
	
	return 0;
}
