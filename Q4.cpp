#include <stdio.h>

int main(){
    int n, i, np, maior, menor;

    printf("\nQuantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    for (i=1;i<=n;i++){
        printf("Digite um numero positivo: ");
        scanf("%d", &np);

        if(i == 1){
            maior = np;
            menor = np;
        }
        if(np > maior){
            maior = np;
        }
        if (np < menor){
            menor = np;
        }
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d", menor);

    return 0;
}