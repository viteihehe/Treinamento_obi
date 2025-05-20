#include <stdio.h>

int main(){
    float p, al, I;

    printf("Insira o seu peso:\n");
    scanf("%f", &p);

    printf("Insira a altura:\n");
    scanf("%f", &al);

    I = p/(al*al);

    if(I < 18.5){
        printf("Voce esta abaixo do peso");
    }else{
        if(I < 25){
            printf("Peso Normal %.2f.",I);
        }else{
            if(I < 30){
                printf("Sobrebeso %.2f.", I);
            }else{
                if(I < 35){
                    printf("Obesidade Grau I %.2f.", I);
                }else{
                    printf("Obresidade Grau II %.2f.", I);
                }
            }
        }
    }

    return 0;
}