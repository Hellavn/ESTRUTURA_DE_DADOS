#include <stdio.h>
int main(){
 float IMC, peso,altura;
 printf("informe o peso: \n");
 scanf("%f", &peso);
 printf("informe a altura: \n");
 scanf("%f", &altura);
 IMC = peso/(altura*altura);
 printf("o resultado do seu IMC e: %f", IMC);
}
