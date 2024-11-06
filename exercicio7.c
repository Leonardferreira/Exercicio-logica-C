/* Faï¿½a um programa que receba o salï¿½rio-base de um funcionï¿½rio, calcule e mostre o seu salï¿½rio a receber, sabendo-se que esse
funcionï¿½rio teve gratificaï¿½ï¿½o de R$ 600,00 e paga imposto de 10% sobre o salï¿½rio base*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float salarioBase,salarioLiquido;
    float gratificacao = 600; //Valor fixo, constante
    float imposto = 0.10; // impoosto valor fixo tambï¿½m

    printf("Digite o Salário base: \n");
    scanf("%f",&salarioBase);
    salarioLiquido = salarioBase * (1- imposto);
    salarioLiquido += gratificacao;
    printf("Salário a receber: R$%.2f ",salarioLiquido); 

    return 0;
}