#include <stdio.h>
int main(){
    float real, dolar, cotacao;
    printf("Digite o valor em real: \n");
    scanf("%f",&real);

    printf("Digite a cotacao atual: \n");
    scanf("%f",&cotacao);

    dolar = real / cotacao;
    printf("Valor em dolar: %.2f", dolar);
}
