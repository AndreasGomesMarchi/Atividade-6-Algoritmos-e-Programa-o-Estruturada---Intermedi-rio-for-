#include <stdio.h>

int main(){
	int n, soma, i, j, cont = 1;
	
	printf("Digite o numero de termos que serao impressos na tela (N): ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		printf("%3d", cont);
		soma = cont + 3;
		
		for(j = 1; j <= 2; j++){
			printf("%3d", soma);
			i++;
		}
		cont++;
	}
	
	
	return 0;
}
