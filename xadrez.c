#include <stdio.h>

int main(){

    int i=0; // contador
    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8;

    //movimento da torre
    printf("Movimentos da torre: ");
    for(i=0; i < casas_torre; i++) // para completar 5 repetições a variavel i deve começar de 0
    {
        printf("[Direita] ");
    }

    //movimento do bispo
    printf("\n================== \n");
    printf("Movimentos do bispo: ");
    i = 0;
    while(i < casas_bispo){
        printf("[cima e direita] ");
        i++;
    }

    //movimento da rainha
    printf("\n================== \n");
    printf("Movimentos da rainha: ");
    i = 0;
    do{
        printf("[Esquerda] ");
        i++;
    } while(i < casas_rainha);
    
    return 0;


}