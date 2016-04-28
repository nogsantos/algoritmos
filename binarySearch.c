#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define QUANTIDADE_DE_PASSOS(tamanho) log((double) tamanho) / log(2)

/**
 * Algoritmo de Busca serial
 */
void serialSearch(int *array, int target, int size){
    int position = 0;
    int success = 0;
    while (position <= size) {
        if(*array == target ){
            printf("Elemento %d encontrado! Posicao: %d do array # de passos: %i\n", target, position, position);
            success = 1;
            break;
        }else{
            position++; 
            array++;
            continue;
        }
    }
    if(!success){
        printf("Elemento %d nao encontrado no array. # de passos %i\n", target, position-1);
    }
}
/**
 * Algoritmo de busca binária
 */
void binarySearch(int *array, int target, int size){
    
    int init = 0;
    int controle = 1;
    int guess = 0;
    int steps = (int) QUANTIDADE_DE_PASSOS(size);
    int *pArray = (int *) malloc(size * sizeof(int));
    pArray = array;
    if (pArray == NULL){
       printf("Problema ao alocar vetor!\n");
       exit(0);
    }
    while(init <= size){
        guess = (init + size) / 2;
        if(target == pArray[guess]){
            controle = 0;
            printf("Elemento %d encontrado! Posicao: %d do array # de passos: ~ %i\n", target, guess, steps);
            break;
        }else if(target < pArray[guess]){
            size = guess - 1;
            continue;
        }else if(target > pArray[guess]){
            init = guess + 1;
            continue;
        }else{
            break;
        }
    }
    if(controle != 0){
        printf("Elemento %d nao encontrado!\n", target);
    }
}

void main(){
    
    int array[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 99, 101, 103, 105,107, 111, 113, 117, 119, 123, 129};
    int size = sizeof(array) / sizeof(int) - 1;
    
    int target;
    printf("Digite o valor para a busca: ");
    scanf("%d", &target);
    
    printf("Busca Serial\n");
    serialSearch((int *)&array, target, size);
    
    printf("Busca Binaria\n");
    binarySearch((int *)&array, target, size);
    
}