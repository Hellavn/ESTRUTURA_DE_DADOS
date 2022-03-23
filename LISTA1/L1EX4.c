#include <stdio.h>
int main(){
    float num1, num2, num3;
    float peso1,peso2, peso3;
    float calculo, media;

     printf("Digite o primero numero: \n");
     scanf("%f", &num1);
     printf("Digite o segundo numero: \n");
     scanf("%f", &num2);
     printf("Digite o terceiro numero: \n");
     scanf("%f", &num3);

     printf("------------------------- \n");

     printf("Digite o primero peso: \n");
     scanf("%f", &peso1);
     printf("Digite o segundo peso: \n");
     scanf("%f", &peso2);
     printf("Digite o terceiro peso: \n");
     scanf("%f", &peso3);

     calculo = (num1 * peso1) + (num2 * peso2) + (num3 * peso3);
     media = calculo / (peso1+peso2+peso3);
     printf(" A media e: %.2f", media);
}

