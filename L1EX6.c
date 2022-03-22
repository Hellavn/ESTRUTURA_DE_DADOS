#include <stdio.h>
int main(){
 float salario, salarioatt;
 printf("Informe o salario atual: ");
 scanf("%f",&salario);
 salarioatt = (salario*1.25);
 printf("Valor do salario atualizado: %.2f", salarioatt);
}
