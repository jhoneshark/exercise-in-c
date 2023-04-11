#include <stdio.h>

double notaMaxima(double valor, double valorMaximo){
    if(valor >= valorMaximo) {
        valor = valorMaximo;
    }
    return valor;
}

int main()
{
    double nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    nota1 = notaMaxima(nota1,10.0);
    nota2 = notaMaxima(nota2,10.0);
    nota3 = notaMaxima(nota3,10.0);

    media = (nota1 + nota2 + nota3) /3;
    printf("MEDIA = %.1lf", media);
    return 0;
}
