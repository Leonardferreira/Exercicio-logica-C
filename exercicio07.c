/*  Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule e mostre o seu sal�rio a receber, sabendo-se que esse
funcion�rio teve gratifica��o de R$ 600,00 e paga imposto de 10% sobre o sal�rio base.
*/
//estrutura sequêncial
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float salarioBase,salarioLiquido;
    float gratificacao = 600; //Valor fixo, constante
    float imposto = 0.10; // impoosto valor fixo tamb�m

    printf("Digite o Sal�rio base: \n");
    scanf("%f",&salarioBase);
    salarioLiquido = salarioBase * (1- imposto);
    salarioLiquido += gratificacao;
    printf("Sal�rio a receber: R$%.2f ",salarioLiquido); 

    return 0;
}