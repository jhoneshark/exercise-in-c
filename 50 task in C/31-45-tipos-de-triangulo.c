#include <stdio.h>
#include <math.h>
#define MAX_QTD 3 // tamanho máximo da array

int main() {
    float array[MAX_QTD];
    int tam, i, j, temp, a, b, c; // contadores e variável temporária para o algoritmo de ordenação e etc
    printf("Digite os 3 valores (separados por espaco): ");
    scanf("%f %f %f", &array[0], &array[1], &array[2]);

    //pega o tamando da array salva em tam para usar no loop abaixo 
    //para fazer o loop da ordenação
    // sizeof(array) retorna o tamanho em bytes do vetor array, que é 
    // uma informação estática e determinada pelo compilador. Dividir 
    // esse tamanho pelo tamanho de um elemento de int (sizeof(int)) 
    // fornece o número de elementos no vetor array. Isso é útil para 
    // iterar sobre os elementos do vetor, calcular estatísticas e realizar 
    // outras operações que requerem o tamanho do vetor em elementos.
    tam = sizeof(array)/sizeof(int);

    // algoritmo bubble sort para ordenar a lisca .. para dordem ao contrario só trocar o "<" da terceira condicao
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - i-1; j++) {
            if (array[j] < array[j+1]) {
                // troca os valores de posição
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    a = array[0];
    b = array[1];
    c = array[2];

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else if (pow(a,2) == pow(b,2) + pow(c,2)) {
        printf("TRIANGULO RETANGULO\n");
    } else if (pow(a,2) > pow(b,2) + pow(c,2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (pow(a,2) < pow(b,2) + pow(c,2)) {
        printf("TRIANGULO ACTANGULO\n");
    }
    if (a == b && a == c && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    }
     if ((a == b && a != c) || (a == c && c != b) || (b == c && a != b)) {
         printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}