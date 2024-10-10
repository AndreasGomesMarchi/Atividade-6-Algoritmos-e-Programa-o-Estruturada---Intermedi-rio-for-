#include <stdio.h>

int main(){
    int soma=0, v, i, res=0;

    printf("Digite o numero de termos: ");
    scanf("%d", &v);

    for(i=1;i<=v;i++){
        soma = soma * 10 + 1;
        res += soma;
        printf("%d", soma);

        if(i < v){
            printf (" + ");
        }
    }

    printf("\nA soma e: %d", res);

    return 0;
}