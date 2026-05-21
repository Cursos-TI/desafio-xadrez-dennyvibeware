#include <stdio.h>

void movimento_da_torre(int x){
    if(x > 0){
        printf("[Direita] ");
        movimento_da_torre(x-1);
    }
}

void movimento_do_bispo(int x){

    if(x > 0){
        for(int i = 0; i < 1; i++){
            printf("[Cima ");
            for(int j = 0; j < 1; j++){
                printf("Direita] ");
            }
        }
        movimento_do_bispo(x-1);
    }
}

void movimento_da_rainha(int x){
    if(x > 0){
        printf("[Esquerda] ");
        movimento_da_rainha(x-1);
    }
}

// 2 casas para cima e 1 para direita
// no desafio nao foi pedido recursividade
void movimento_do_cavalo(){ 

    //usar loop aninhados
    //usar multiplas variaveis e/ou condicoes
    //usar continue e break
    int i = 1, j = 1;
    while(i--){
        for(j = 0; j < 2; j++){
            printf("[Cima] ");
        }
        printf("[Direita] \n");
    }
}

int main(){

    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8, casas_cavalo=3;

    //movimento da torre
    printf("Movimentos da torre");
    printf("\n===================\n");
    movimento_da_torre(casas_torre);

    //movimento do bispo
    printf("\n\nMovimentos do bispo");
    printf("\n===================\n");
    movimento_do_bispo(casas_bispo);

    // movimento da rainha
    printf("\n\nMovimentos da rainha");
    printf("\n====================\n");
    movimento_da_rainha(casas_rainha);

    //movimento do cavalo
    printf("\n\nMovimentos do cavalo");
    printf("\n====================\n");
    movimento_do_cavalo();
   
    return 0;

}