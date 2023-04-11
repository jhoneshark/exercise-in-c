//No final do cogito tem uma versao melhorada da atividade
#include <stdio.h>
#define MAX_SIZER 100 // tamanho máximo da array

int main() {
    int array[MAX_SIZER], arrayOld[MAX_SIZER];
    int qtdValores = 3;
    int i, j, temp; // contadores e variável temporária para o algoritmo de ordenação

    printf("Digite %d valores (separados por espaco): ", qtdValores);
    scanf("%d %d %d", &array[0], &array [1], &array[2]);

    // fazendo a copia da array antes de ser ordenada
    for(i = 0; i < qtdValores; i++) {
      arrayOld[i] = array[i];
    }

    // algoritmo bubble sort para ordenar a lisca .. para dordem ao contrario só trocar o ">" da terceira condicao
    for (i = 0; i < qtdValores - 1; i++) {
        for (j = 0; j < qtdValores - i-1; j++) {
            if (array[j] > array[j+1]) {
                // troca os valores de posição
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }   

    for ( i = 0; i < qtdValores; i++) {
        printf("%d\n", array[i]);
    }

    printf("\n");
    
    for ( i = 0; i < qtdValores; i++) {
        printf("%d\n", arrayOld[i]);
    }

    return 0;
}

// #include <stdio.h>
// #define MAX_SIZER 100 // tamanho máximo da array

// int main() {
//     int array[MAX_SIZER], arrayOld[MAX_SIZER], qtdValores;
//     int i, j, temp; // contadores e variável temporária para o algoritmo de ordenação

//     printf("Digite quantos valores voce vai inserir para ser ordenado: ");
//     scanf("%d", &qtdValores);

//     printf("Quantidade de valores a serem inseridos e : '%d' \n", qtdValores);

//     for (i = 0; i < qtdValores; i++) {
//         printf("Digite o um unico valor: ");
//         scanf("%d", &array[i]);
//     }
    
//     // fazendo a copia da array antes de ser ordenada
//     for(i = 0; i < qtdValores; i++) {
//       arrayOld[i] = array[i];
//     }

//     // algoritmo bubble sort para ordenar a lisca .. para dordem ao contrario só trocar o ">"
//     for (i = 0; i < qtdValores - 1; i++) {
//         for (j = 0; j < qtdValores - i-1; j++) {
//             if (array[j] > array[j+1]) {
//                 // troca os valores de posição
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }
//     }   

//     for ( i = 0; i < qtdValores; i++) {
//         printf("%d\n", array[i]);
//     }

//     printf("\n");
    
//     for ( i = 0; i < qtdValores; i++) {
//         printf("%d\n", arrayOld[i]);
//     }

//     return 0;
// }
