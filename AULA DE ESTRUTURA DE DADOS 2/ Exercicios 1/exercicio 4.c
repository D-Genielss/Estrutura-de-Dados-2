#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *v, int n) {

int i, j, escolha;
int N_trocas = 0;

    for(i = 1; i < n; i++) {

        N_trocas ++;

     escolha = v[i];
     j = i-1;

        while(j>=0 && escolha < v[j]) {

         v[j+1] = v[j];
         j = j-1;

        }

     v[j+1] = escolha;

    }

    printf("Numero de trocas : %d \n",N_trocas);

}

int main(){

    int V[10] = {31,42,56,02,99,110,9,51,62,87};
    int numero_de_elem = 10;

        printf("Antes : ");
    for(int i = 0; i < numero_de_elem ;i++){

        printf("[%d] ",V[i]);

    }
        printf("\n");

insertionSort(V, numero_de_elem);

        printf("Depois : ");
    for(int i = 0; i < numero_de_elem ;i++){

        printf("[%d] ",V[i]);
        
    }
        printf("\n");

    return 0;
    
}