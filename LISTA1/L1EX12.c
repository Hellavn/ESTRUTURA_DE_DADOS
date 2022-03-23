#include <stdio.h>
int main(){
float altura, peso;
     char sexo;
     printf("digite altura: \n");
     scanf("%f", &altura);

     while ((getchar()) != '\n');

     printf("Digite o Sexo, Masculino(M) ou Feminino(F): \n");
     scanf("%c", &sexo);
    if(sexo != 'm' && sexo!= 'f'){
        if(sexo == 'M'){
         peso = (72.7 * altura) - 58;
         printf("O peso ideal e %.2f\2n", peso);
         }else if (sexo == 'F'){
             peso = (62.1 * altura) - 44.7;
             printf("O peso ideal e %.2f \n", peso);
         }else{
             printf("Opcao invalida \n");
         }
    }else{
        printf("Favor digitar o sexo em letra maiuscula");
    }


}
