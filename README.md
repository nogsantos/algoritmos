# Algorítmos

## Busca binária (Binary search)

## Análise assintóticas (Linha que, numa curva plana, expressa uma distância infinita em relação ao ponto P.)

* Um função tem crescimento "constante" se sua saída não muda com base na entrada, o n. Uma forma fácil de identificar funções constantes é encontrar aquelas que não têm n em suas expressões, ou têm n0 . Nesse caso, 1 e 1000 são constantes.
* Uma função tem crescimento "linear" se sua saída aumenta linearmente com o tamanho de sua entrada. A forma de identificar funções lineares é encontrar aquelas nas quais n nunca é elevado a uma potência (exceto por n 1 , que está OK) ou usado como potência. Nesse caso, 3n e (3/2)n são lineares.
* Uma função tem crescimento "polinomial" se sua saída aumenta de acordo com uma expressão polinomial. A foram de identificar funções polinomiais é encontrar aquelas nas quais n é elevado a uma potência constante. Nesse caso, 2n 3 e 3n 2 são polinomiais.
* A função tem crescimento "exponencial" se suas saídas aumentam de acordo com uma expressão exponencial. A forma de identificar funções exponenciais é encontrar aquelas nas quais uma constante é elevada a alguma expressão que envolve n . Nesse caso, 2n e (3/2)n são exponenciais.

## Ordenação por seleção (Selection sort)

```JavaScript
var swap = function(array, firstIndex, secondIndex) {
    var temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
};
var indexOfMinimum = function(array, startIndex) {
    var minValue = array[startIndex];
    var minIndex = startIndex;
    for(var i = minIndex + 1; i < array.length; i++) {
        if(array[i] < minValue) {
            minIndex = i;
            minValue = array[i];
        }
    } 
    return minIndex;
}; 
var selectionSort = function(array) {
    var min;
    for(var i =0; i < array.length; i++){
        min = indexOfMinimum(array, i);
        swap(array, i, min);
    }
};
var array = [22, 11, 99, 88, 9, 7, 42];
selectionSort(array);
console.log("Array after sorting:  " + array);

var array = [0, -11, 99, 88, 9, 100, -42];
selectionSort(array);
console.log("Array after sorting:  " + array);
```

