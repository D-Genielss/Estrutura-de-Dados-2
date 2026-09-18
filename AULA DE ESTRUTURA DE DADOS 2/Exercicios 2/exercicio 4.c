#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Observei que a versão melhorada pratica muito menos trocas , fazendo gastar muito menos processos e tempo */

void Selection_Sort(int *v,int t){  

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

void Selection_Sort_Melhor(int *vetor ,int tamanho){

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

    int vetor[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 101; // valores de 0 a 100
    }

    int tamanho = 100;
    clock_t inicio, fim;
    
//mostrando antes

    printf("Versão Comum\n");
    printf(" \n");

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

//--------------------------------------------------------------------------------
    printf(" \n");
    printf("Versão melhorada \n");
    printf(" \n");

    int vetorM[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        vetorM[i] = rand() % 101; // valores de 0 a 100
    }

    int tamanhoM = 100;
    
//mostrando antes

    printf("Antes : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetorM[i]); 
    }
    printf("\n");

    //começa o timer
    inicio = clock();

    Selection_Sort_Melhor(vetorM , tamanhoM);

    //termina o timer
    fim = clock();

//mostrando dpois

    printf("Depois : ");
    for(int i = 0; i < tamanho; i++){
       printf("%i ,",vetorM[i]); 
    }
    printf("\n");

    //mostra o tempo 

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo decorrido: %f segundos\n",tempo);

return 0;

}