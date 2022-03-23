#include <stdio.h>
int main()
{
    int metros, centimetros, milimetros;
    printf("Informe a metragem: ");
    scanf("%d", &metros);
    centimetros = metros * 100;
    milimetros = metros * 1000;
    printf("A valor e metros:  %d \n O valor em centimetros: %d \n O valor em milimetros: %d",
           metros, centimetros, milimetros);
}
