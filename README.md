# Algor�tmos

## Busca bin�ria (Binary search)

## An�lise assint�ticas (Linha que, numa curva plana, expressa uma dist�ncia infinita em rela��o ao ponto P.)

* Um fun��o tem crescimento "constante" se sua sa�da n�o muda com base na entrada, o n. Uma forma f�cil de identificar fun��es constantes � encontrar aquelas que n�o t�m n em suas express�es, ou t�m n0 . Nesse caso, 1 e 1000 s�o constantes.
* Uma fun��o tem crescimento "linear" se sua sa�da aumenta linearmente com o tamanho de sua entrada. A forma de identificar fun��es lineares � encontrar aquelas nas quais n nunca � elevado a uma pot�ncia (exceto por n 1 , que est� OK) ou usado como pot�ncia. Nesse caso, 3n e (3/2)n s�o lineares.
* Uma fun��o tem crescimento "polinomial" se sua sa�da aumenta de acordo com uma express�o polinomial. A foram de identificar fun��es polinomiais � encontrar aquelas nas quais n � elevado a uma pot�ncia constante. Nesse caso, 2n 3 e 3n 2 s�o polinomiais.
* A fun��o tem crescimento "exponencial" se suas sa�das aumentam de acordo com uma express�o exponencial. A forma de identificar fun��es exponenciais � encontrar aquelas nas quais uma constante � elevada a alguma express�o que envolve n . Nesse caso, 2n e (3/2)n s�o exponenciais.

## Ordena��o por sele��o (Selection sort)

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

