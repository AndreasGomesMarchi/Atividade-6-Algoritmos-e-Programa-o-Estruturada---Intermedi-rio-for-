#include <stdio.h>

int main(){
	int i, n, f, fat, v, m;
	
	printf("Digite quantos valores inteiros positivos deseja inserir: ");
	scanf("%d", &n);
	
	for(i = 1; i<=n; i++){
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &f);
		
		v = f;
		
		for(m = f; m>=1  ;m--){
			fat *= f;
			f--;
		} 
		printf("Valor: %d | Fatorial: %d\n", v, fat);
		fat = 1;
	}
	
	return 0;
}
