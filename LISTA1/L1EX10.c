#include <stdio.h>
int main(){
 float valor, dia1, dia2, dia3, dia4;
 valor = 1000;
 dia1 = valor - (valor * 0.034);
 dia2 = dia1 * 1.028;
 dia3 = dia2 * 1.14;
 dia4 = dia3 - (dia3 * 0.085);
 printf("Valor no primeiro dia -3,4%: R$%.2f\n", dia1);
 printf("Valor no segundo dia +2,8%: R$%.2f\n", dia2);
 printf("Valor no terceiro dia +14,0%:R$%.2f\n", dia3);
 printf("Valor no quarto dia -8,5%: R$%.2f\n ", dia4);
}

