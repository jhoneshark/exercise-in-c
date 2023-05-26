#include <stdio.h>
int main(){

    
    float A, B, media, pesoA, pesoB;
    pesoA = 3.5;
    pesoB = 7.5;
    
    scanf("%f", &A);
    scanf("%f", &B);

    media = ((A * pesoA) + (B *pesoB)) / (pesoA + pesoB);

    printf("MEDIA = %.5f\n", media);
    

    return 0;
}
