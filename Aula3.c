#include <stdio.h>


int main(){

   int fe, to , dor , coli , enjo = 0;  
   int a,b;
   fe = to = dor = coli = enjo;  

    printf("Voce esta com febre?, 1 para sim e 0 para nao:\n");
    scanf("%d", &a);

    fe = a;

      printf("Voce esta com tosse? para sim 1 e 0 para nao:\n");
    scanf("%d", &a);

    to = a;

      printf("Voce esta com colica? para sim 1 e 0 para nao\n");
    scanf("%d", &a);

    dor = a;

      printf("Voce esta com dor?, 1 para sim e 0 para nao:\n");
    scanf("%d", &a);

    coli = a;

      printf("Voce esta com enjoo, 1 para sim e 0 para nao:\n");
    scanf("%d", &a);

    enjo = a;

    b = enjo+dor+to+fe+coli;

    if(b >= 3){
        printf("Grupo de risco\n");

    }else{
        if(fe){
            printf("Observação\n");
        }else{
            printf("liberado\n");
        }

    }

    

    return 0;
}