#include <stdio.h>
#include <time.h>

void Selection_Sort(int *vetor ,int tamanho){

    int auxiliar,trocas = 0;

    for(int i = 0; i < tamanho-1; i ++){

    int menor = i;

        for (int j = i + 1; j < tamanho; j++) {

            if (vetor[j] < vetor[menor]) {

                menor = j;

            }
        }

        if (menor != i) {

            trocas ++;
            auxiliar = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = auxiliar;

        }

    }

    printf("foram feitas %i trocas \n",trocas);

}

int main(){

    int vetor[] = {13, 2, 20, 43, 60, 59, 99, 81, 34, 72, 100};
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