#include <stdio.h>

int main(){
    int n, i, np;

    printf("\nQuantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    for (i=1;i<=n;i++){
        printf("Digite um numero positivo: ");
        scanf("%d", &np);

        if(np % 2 == 0){
            printf("O primeiro numero par encontrado e: %d", np);
            break;
        }else if(i == n){
            printf("Nenhum numero par foi encontrado!");
        }
        
    }


    return 0;
}