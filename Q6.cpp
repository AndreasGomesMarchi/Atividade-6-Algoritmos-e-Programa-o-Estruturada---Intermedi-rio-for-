#include <stdio.h>

int main(){
    float ze, chico, tempo;

    ze = 1.10;
    chico = 1.50;

    for(tempo = 0; ze < chico; tempo++){
        ze += 0.03;
        chico += 0.02;
    }

    printf("\n\nO numero de anos que vai demorar para Ze passar Chico e %.1f\n\n", tempo);

    return 0;
}