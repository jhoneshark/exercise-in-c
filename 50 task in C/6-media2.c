#include <stdio.h>
int main(){

    
    float A, B, C, media, pesoA, pesoB, pesoC;
    pesoA = 2;
    pesoB = 3;
    pesoC = 5;
    
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    media = ((A * pesoA) + (B * pesoB) + (C * pesoC)) / (pesoA + pesoB + pesoC);

    printf("MEDIA = %.1f\n", media);
    

    return 0;
}
