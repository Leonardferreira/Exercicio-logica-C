/*  Faça um programa que receba o salário-base de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse
funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.
*/

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