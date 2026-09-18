#include <stdio.h>

void Inserction_Sort(int *v,int t){

    //variaveis de aux
        int i ,j ,min ,aux;
        int trocas = 0;

        for(i = 0; i < t-1 ; i++){
            min = i;

            for(j = i+1; j < t; j++){

                if(v[j] < v [min]){
                    trocas ++;
                    aux = v[min];
                    v[min] = v[j];
                    v[j] = aux;
                }
            }
        }

        printf("foram feitas %i trocas \n",trocas);
        
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

    Inserction_Sort(vetor ,tamanho);

//mostrando dpois

    printf("Depois : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetor[i]); 
    }
    printf("\n");

return 0;

}