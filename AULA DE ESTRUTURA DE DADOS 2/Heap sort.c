#include <stdio.h>

void Cria_Heap(int *vetor, int i, int f){

    int auxiliar = vetor[i];
    int j = (i * 2 + 1);

    while(j <= f){

        if(j < f){
            
            if(vetor[j] < vetor[j + 1]){
                
                j = j + 1 ;

            }//2 if

        }//1 if   

        if(auxiliar < vetor[j]){

            vetor[i] = vetor[j];
            i = j;
            j = 2 * i +1 ;

        }else{

            j = f +1 ;

        }// else 1

    }//while
    
    vetor[i] = auxiliar;

}

void Heap_sort(int *vetor, int Tamanho){

    int i, auxiliar;

    for(i = (Tamanho -1)/2; i >= 0 ;i --){

        Cria_Heap(vetor, i, Tamanho -1);

    }
    for(i = Tamanho-1; i>=1 ;i --){

        auxiliar = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = auxiliar;
        Cria_Heap(vetor, 0, i-1);
    }
}

int main(){

    int vetorX[] = {31,42,56,02,99,110,9,51,62,87};
    int tamanho = 10;
    
        printf("Antes : ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ",vetorX[i]);
    }
    printf("\n");

    Heap_sort(vetorX, tamanho);

    printf("Dpois : ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ",vetorX[i]);
    }
    printf("\n");

    return 0;
}
