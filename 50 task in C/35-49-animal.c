// no final do codigo tem uma versao melhorada desse.
#include <stdio.h>
#include <string.h>

int main() {
    char entrada[3][20];
    char aguia[3][20] = {"vertebrado","ave","carnivoro"};
    char pombo[3][20] = {"vertebrado","ave","onivero"};
    char homem[3][20] = {"vertebrado","mamifero","onivero"};
    char vaca[3][20] = {"vertebrado","mamifero","herbivero"};
    char pulga[3][20] = {"invertebrado","inseto","hematofago"};
    char lagarta[3][20] = {"invertebrado","inseto","herbivero"};
    char sanguessuga[3][20] = {"invertebrado","anelideo","hemafotago"};
    char minhoca[3][100] = {"invertebrado","anelideo","onivoro"};

    for (int i = 0; i < 3; i++) {
        printf("Digite uma cacteristica para  descobrir que tipo de animal e: ");
        scanf("%s",entrada[i]);
    }

    if (strcmp(entrada[0],aguia[0]) == 0 && strcmp(entrada[1],aguia[1]) == 0 && strcmp(entrada[2], aguia[2]) == 0){
        printf("aguia");
    } else if (strcmp(entrada[0],pombo[0]) == 0 && strcmp(entrada[1],pombo[1]) == 0 && strcmp(entrada[2], pombo[2]) == 0) {
        printf("pombo");
    } else if (strcmp(entrada[0],homem[0]) == 0 && strcmp(entrada[1],homem[1]) == 0 && strcmp(entrada[2], homem[2]) == 0) {
        printf("homem");
    } else if (strcmp(entrada[0],vaca[0]) == 0 && strcmp(entrada[1],vaca[1]) == 0 && strcmp(entrada[2], vaca[2]) == 0) {
        printf("vaca");
    } else if (strcmp(entrada[0],pulga[0]) == 0 && strcmp(entrada[1],pulga[1]) == 0 && strcmp(entrada[2], pulga[2]) == 0) {
        printf("pulga");
    } else if (strcmp(entrada[0],lagarta[0]) == 0 && strcmp(entrada[1],lagarta[1]) == 0 && strcmp(entrada[2], lagarta[2]) == 0) {
        printf("lagarta");
    } else if (strcmp(entrada[0],sanguessuga[0]) == 0 && strcmp(entrada[1],sanguessuga[1]) == 0 && strcmp(entrada[2], sanguessuga[2]) == 0) {
        printf("sanguessuga");
    } else if (strcmp(entrada[0],minhoca[0]) == 0 && strcmp(entrada[1],minhoca[1]) == 0  && strcmp(entrada[2], minhoca[2]) == 0) {
        printf("minhoca");
    }
    
    return 0;
}



// #include <stdio.h>
// #include <string.h>

// struct Animal {
//     char tipo[20];
//     char classe[20];
//     char alimentacao[20];
//     char nome[20];
// };

// int main() {
//     struct Animal animais[] = {
//         {"vertebrado", "ave", "carnivoro", "aguia"},
//         {"vertebrado", "ave", "onivoro", "pombo"},
//         {"vertebrado", "mamifero", "onivoro", "homem"},
//         {"vertebrado", "mamifero", "herbivoro", "vaca"},
//         {"invertebrado", "inseto", "hematofago", "pulga"},
//         {"invertebrado", "inseto", "herbivoro", "lagarta"},
//         {"invertebrado", "anelideo", "hematofago", "sanguessuga"},
//         {"invertebrado", "anelideo", "onivoro", "minhoca"}
//     };

//     char entrada[3][20];

//     for (int i = 0; i < 3; i++) {
//         printf("Digite uma caracteristica para descobrir que tipo de animal e: ");
//         scanf("%s", entrada[i]);
//     }

//     //Uma variável do tipo "signed int" é um tipo de variável 
//     //inteira que pode armazenar valores inteiros positivos, negativos e zero.
//     // Uma variável do tipo "unsigned int" é uma variável inteira que só pode 
//     // armazenar valores inteiros não negativos, incluindo zero.

//     for (unsigned i = 0; i < sizeof(animais) / sizeof(animais[0]); i++) {
//         if (strcmp(entrada[0], animais[i].tipo) == 0 &&
//             strcmp(entrada[1], animais[i].classe) == 0 &&
//             strcmp(entrada[2], animais[i].alimentacao) == 0) {
//             printf("%s\n", animais[i].nome);
//             return 0;
//         }
//     }

//     printf("Animal nao encontrado\n");
//     return 0;777
// }

// #include <stdio.h> e #include <string.h> incluem as bibliotecas padrão do C para 
// entrada/saída de dados e manipulação de strings, respectivamente.
// struct Animal define uma estrutura com quatro membros: tipo, classe, alimentacao 
// e nome, todos com tamanho de 20 caracteres.
// struct Animal animais[] = { ... } é uma matriz de oito elementos do tipo struct 
// Animal, que é inicializada com informações sobre diferentes animais.
// char entrada[3][20]; define uma matriz bidimensional de 3x20 para armazenar as 
// características inseridas pelo usuário.
// for (int i = 0; i < 3; i++) { ... } percorre a matriz entrada e solicita que o 
// usuário digite uma característica para cada uma delas, armazenando cada entrada na matriz.
// for (int i = 0; i < sizeof(animais) / sizeof(animais[0]); i++) { ... } percorre a 
// matriz animais e verifica se os valores inseridos pelo usuário correspondem a algum 
// dos animais. Se uma correspondência é encontrada, o nome do animal correspondente é 
// exibido e o programa termina com return 0. Caso contrário, a mensagem "Animal nao encontrado"
//  é exibida e o programa também termina com return 0.
