#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void troca(int* A ,int* B){
    int tmp = *A;
    *A = *B;
    *B = tmp;
}

void buble_sort_Crescente(int X[] ,int N){

    bool TROCA = true;

    while(TROCA){

        TROCA = false;
        for(int i = 0; i < N-1 ; i++){
            
            if(X[i] > X[i+1]){
                troca(&X[i] ,&X[i+1]);
                TROCA = true;
            }
        }
    }
        

}

void buble_sort_decrescente(int X[] ,int N){

    bool TROCA = true;

    while(TROCA){

        TROCA = false;
        for(int i = 0; i < N-1 ; i++){
            
            if(X[i] < X[i+1]){
                troca(&X[i] ,&X[i+1]);
                TROCA = true;
            }
        }
    }
}

int main(){

    int vetorX[10] = {31,42,56,02,99,110,9,51,62,87};
    int n = 10;
    int escolha;

    printf("Antes : "); //printa  alista desordenada
    for (int i = 0; i < n; i++){
        printf("%d ",vetorX[i]);
        
    }

    printf("\n");

    printf("Voce deseja a ordenação em ordem crescente ou decrescente (1 para crescente e 2 para decrescente : )");
    scanf("%d",&escolha);

    printf("\n");

    if(escolha == 1 ){

        buble_sort_Crescente(vetorX, n);
        
        printf("Depois : ");

        for (int i = 0; i < n; i++){

            printf("[%d] ",vetorX[i]);

        }

        printf("\n");

    }else{

        buble_sort_decrescente(vetorX, n);

        printf("Depois : ");

        for (int i = 0; i < n; i++){

            printf("[%d] ",vetorX[i]);

        }

        printf("\n");

    }
    
    return 0;

}