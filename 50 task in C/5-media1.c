#include <stdio.h>

double notaMaxima(double valor, double valorMAximo){
    if(valor >= valorMAximo){
        valor = valorMAximo;
    }

    return valor;
}

int main()
{
    double nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nota1 = notaMaxima(nota1,10.0);
    nota2 = notaMaxima(nota2,10.0);

    media = (nota1 + nota2) / 2;

    printf("MEDIA = %lf", media);
}
