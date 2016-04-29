#include <stdio.h>
#include <stdlib.h>
/*
 * ponteiro para a quantidade de elementos
 */
int *pQtdElementos;
/**
 * Ordena o array de acordo com o menor valor atual
 */
void realizarTroca(int *array, int posicaoAtual, int menorValor){
    int troca = array[posicaoAtual];    
    array[posicaoAtual] = array[menorValor];
    array[menorValor] = troca;
}

void main() {
    int numeroDeElementos;
    int contador; 
    int subContador;
    int menorValorAtual;
    /*
     * Le os dados digitados
     */
    printf("Informe a quantidade de elementos no array\n");
    scanf("%d", &numeroDeElementos);
    pQtdElementos = (int *)&numeroDeElementos;
    printf("Array com %d inteiros\n", *pQtdElementos);
    /*
     * Define o tamanho do array
     */
    int array[*pQtdElementos];
    /*
     * Le os valores do array
     */
    printf("Informe os valores:\n");
    for (contador = 0; contador < *pQtdElementos; contador++){
        scanf("%d", &array[contador]);
    }
    /*
     * Realiza a ordenacao
     */
    for (contador = 0; contador < (*pQtdElementos - 1); contador++){
        /*
         * Retorna o indice do menor valor
         */
        menorValorAtual = contador;
        for (subContador = contador + 1; subContador < *pQtdElementos; subContador++) {
            if (array[menorValorAtual] > array[subContador]){
                menorValorAtual = subContador;
            }
        }
        
        realizarTroca((int *)&array, contador, menorValorAtual);
    }
    /*
     * Imprime a lista ordenada
     */
    printf("Array ordenado acendente: ");
    printf("[");
    for (contador = 0; contador < *pQtdElementos; contador++){
        printf("%d,", array[contador]);
    }
    printf("]\n");
}