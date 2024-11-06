/*Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o
novo salário.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float salario, novoSalario;
    float aumento;
    printf("Digite o seu salï¿½rio: \n");
    scanf("%f",&salario);
    
    printf("Digite o percentual do aumento: \n");
    scanf("%f", &aumento);

    novoSalario = salario + (salario * aumento/100);
    printf("Valor do aumento: %2.f%% \n", aumento);
    printf("Novo salãrio é : R$%2.f \n",novoSalario);

    return 0;
}
