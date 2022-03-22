#include <stdio.h>
int main(){
 int num;
 printf("Digite um numero DE quatro digitos:\n");
 scanf("%i", &num);
 printf("Primeiro Digito: %i \n", num/1000 );
 num = num % 1000;
 printf("Segundo Digito: %i \n", num/100 );
 num = num % 100;
 printf("Terceiro Digito: %i \n", num/10 );
 num = num % 10;
 printf("Quarto Digito: %i \n", num/1);
 num = num % 1;
}
