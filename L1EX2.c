#include <stdio.h>
int main(){
     int iFahr, iCelsius;
     float fCelsius;
     printf("Informe os graus em Fahrenreit: ");
     scanf("%d", &iFahr);
     fCelsius = (iFahr - 32.0) * (5.0/9.0);
     iCelsius = (iFahr - 32)* (5/9);
     printf("Valor em Celsius usando float e: %.2f graus \n", fCelsius);
     printf("Valor em Celsius usando int e: %d graus", iCelsius);
}
