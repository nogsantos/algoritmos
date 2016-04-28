#include <stdio.h>



void main() {

    int numeroDeElementos;
    int contador; 
    int subContador; 
    int posicao;
    int troca;
    
    printf("Enter number of elements\n");
    scanf("%d", &numeroDeElementos);
    printf("Enter %d integers\n", numeroDeElementos);
    
    int array[numeroDeElementos];

    for (contador = 0; contador < numeroDeElementos; contador++){
        scanf("%d", &array[contador]);
    }

    for (contador = 0; contador < (numeroDeElementos - 1); contador++) {
        posicao = contador;

        for (subContador = contador + 1; subContador < numeroDeElementos; subContador++) {
            if (array[posicao] > array[subContador])
                posicao = subContador;
        }
        if (posicao != contador) {
            troca = array[contador];
            array[contador] = array[posicao];
            array[posicao] = troca;
        }
    }

    printf("Sorted list in ascending order:\n");

    for (contador = 0; contador < numeroDeElementos; contador++){
        printf("%d\n", array[contador]);
    }
}