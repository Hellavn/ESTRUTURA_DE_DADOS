#include <stdio.h>
int main(){
    float massa, forca;
    int aceleracao;

     printf("A primeira lei de Newton: principio da Inercia \n");

     printf("informe a massa: \n");
     scanf("%f", &massa);
     printf("Informe a aceleracao: \n");
     scanf("%f", &aceleracao);

     forca = massa* aceleracao;
     printf("A forca e: %.2f", forca);
}



