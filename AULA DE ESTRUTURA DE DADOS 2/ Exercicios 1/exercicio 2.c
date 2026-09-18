#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void troca(int* A ,int* B){
    int tmp = *A;
    *A = *B;
    *B = tmp;
}

void buble_sort(int X[] ,int N){

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

int main(){
    int vetorX[10] = {31,42,56,02,99,110,9,51,62,87};
    int n = 10;
    
        printf("Antes : ");
    for (int i = 0; i < n; i++){
        printf("[%d] ",vetorX[i]);
    }
    
    printf("\n");
    
    buble_sort(vetorX, n);
    
        printf("Depois : ");
    for (int i = 0; i < n; i++){
        printf("[%d] ",vetorX[i]);
    }

    printf("\n");

    return 0;

}