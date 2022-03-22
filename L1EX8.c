#include <stdio.h>
int main(){
     int num, calc;
     printf("Digite o valor: \n");
     scanf("%d",&num);
     calc = (num * 3 + 1) + (num * 2 - 1);
     printf("O resultado e: %d", calc);
}
