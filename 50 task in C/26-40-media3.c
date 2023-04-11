#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media, exame, novaMedia;
    printf("Digite as 4 notas separadas por espaco: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media > 5.0 && media < 6.9)
    {
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        printf("\n");
        printf("Media: %.1f\n", media);
        printf("Aluno em exame...\n");
        printf("Nota do exame: %.1f\n", exame);
        novaMedia = (exame + media) / 2;

        if (novaMedia >= 5.0)
        {
            printf("Aluno APROVADO!\n");
        }
        else if (novaMedia <= 4.9)
        {
            printf("Aluno REPROVADO!!!!\n");
        }
        printf("Media Final: %.1f\n", novaMedia);
    }
    else
    {
        printf(" \n");
        printf("Media: %.1f\n", media);
    }

    if (media >= 7.0)
    {
        printf("Aluno APROVADO!\n");
    }
    else if (media <= 5.0)
    {
        printf("Aluno REPROVADO!!!!\n");
    }

    return 0;
}