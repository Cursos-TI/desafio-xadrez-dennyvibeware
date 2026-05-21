#include <stdio.h>

int main(){

    int i=1, j=1; // contador
    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8, casas_cavalo=3;

    //movimento da torre
    printf("Movimentos da torre");
    printf("\n===================\n");
    for(i=0; i < casas_torre; i++) // 0 1 2 3 4 , a variavel i precisa começar de 0 para repetir 5x
    {
        printf("[Direita] ");
    }

    //movimento do bispo
    printf("\n\nMovimentos do bispo");
    printf("\n===================\n");
    i = 0;
    while(i < casas_bispo){
        printf("[cima e direita] ");
        i++;
    }

    //movimento da rainha
    printf("\n\nMovimentos da rainha");
    printf("\n====================\n");
    i = 0;
    do{
        printf("[Esquerda] ");
        i++;
    } while(i < casas_rainha);
    
    //movimento do cavalo
    printf("\n\nMovimentos do cavalo");
    printf("\n====================\n");
    i=1;
    while(i--){
        for(j = 0; j < 2; j++){
            printf("[Baixo] ");
        }
        printf("[Esquerda] \n");
    }
        


    return 0;


}