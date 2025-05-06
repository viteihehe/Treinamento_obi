#include <stdio.h>
#include <stdlib.h>

int main(){

    int Si, H, M, Ms, S;

    printf("Insira  o valor em segundos:\n");
    scanf("%d", &Si);

    H = Si/3600;
    Ms = (Si - H*3600);
    M = Ms/60;
    S = Ms - (M*60);

    printf("%dh, %dm, %ds", H, M, S);

}