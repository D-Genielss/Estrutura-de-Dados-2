/*Utilizando a Linguagem C, implementar  um programa, que implemente um algoritmo de busca linear, que mostre  
posição do elemento 4, considerando que temos tres elementos repetido:*/
#include <stdio.h>

int BuscaLinear(int *vetor, int tamanho, int elem){

    int test = 0;

    for(int i = 0 ; i < tamanho ; i++){
        if(vetor[i] == elem){
            printf("[%d] ",i);
            test ++;
        }
    }
    if(test == 0){

        printf("elemento não encontrado \n");
    }
    printf("\n");

    return -1;
}

int main() {

    int n = 10;
    int V[] = {1, 25, 3, 30, 4, 27, 17, 4, 2, 4}; //vetor desordenado;
    int elem;

//pegando elemento
    printf("Qual elemento deseja procurar na sua lista : ");
    scanf("%i",&elem);

//buscando

    printf("Seu elemento : ");
    BuscaLinear(V , n, elem);

    return 0;

}