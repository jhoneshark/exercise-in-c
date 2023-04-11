#include <stdio.h>

int main() {
    int i, j, temp, a, b, contador, entrada[2];
    int tamanhoArray = sizeof(entrada) / sizeof(entrada[0]);

    for ( i = 0; i < tamanhoArray; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &entrada[i]);
    }

    // algoritmo bubble sort para ordenar a lisca .. para dordem ao contrario só trocar o ">" da terceira condicao
    for (i = 0; i < tamanhoArray - 1; i++) {
        for (j = 0; j < tamanhoArray - i-1; j++) {
            if (entrada[j] > entrada[j+1]) {
                // troca os valores de posição
                temp = entrada[j];
                entrada[j] = entrada[j+1];
                entrada[j+1] = temp;
            }
        }
    }

    //esse codigo abaixo serve para saber quantos numeros impares 
    //tem do valor inicial ao final dado na entrada
    a = entrada[0];
    b = entrada[1];
    contador = 0 ;
    for (int i = a + 1; i < b; i++) {
        if (i % 2 != 0) {
            contador++;
        }
    }

    if (contador == 0) {
        printf("%d",contador);   
    } else if (contador == 1) {
        printf("%d", a+1);
    } else {
        printf("%d",contador);
    }
       
    return 0;
}