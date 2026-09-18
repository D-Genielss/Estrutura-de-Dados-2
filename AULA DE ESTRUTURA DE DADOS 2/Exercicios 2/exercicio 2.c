#include <stdio.h>
#include <time.h>

void Selection_Sort(int *v,int t){  

    //variaveis de aux
        int i ,j ,min ,aux;
        int trocas = 0;

        for(i = 0; i < t-1 ; i++){
            min = i;

            for(j = i+1; j < t; j++){

                if(v[j] > v [min]){
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
    clock_t inicio, fim;
    
//mostrando antes

    printf("Antes : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetor[i]); 
    }
    printf("\n");

    //começa o timer
    inicio = clock();

    Selection_Sort(vetor ,tamanho);

    //termina o timer
    fim = clock();

//mostrando dpois

    printf("Depois : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetor[i]); 
    }
    printf("\n");

    //mostra o tempo 

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo decorrido: %f segundos\n",tempo);

return 0;

}