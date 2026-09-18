#include <stdio.h>

void Selection_Sort(int *v,int t){

    //variaveis de aux
        int i ,j ,min ,aux;

        for(i = 0; i < t-1 ; i++){
            min = i;

            for(j = i+1; j < t; j++){

                if(v[j] < v [min]){

                    aux = v[min];
                    v[min] = v[j];
                    v[j] = aux;
                }
            }
        }
} 

int main(){

    int vetor[] = {13, 2, 43, 20, 60, 59, 99, 81, 34, 72, 100};
    int tamanho = 11;

//mostrando antes

    printf("Antes : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetor[i]); 
    }
    printf("\n");

    Selection_Sort(vetor ,tamanho);

//mostrando dpois

    printf("Depois : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetor[i]); 
    }
    printf("\n");

return 0;

}