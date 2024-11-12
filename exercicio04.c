/* Faça um programa que receba o salário deum funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um
aumento de 25%. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float salario, novoSalario;

printf("Calcular salário com aumento de 25%% \n");
printf("Digite seu Salário atual: \n");
scanf("%f", &salario);

novoSalario = salario + (salario * 0.25);
printf("Seu novo Salário com aumento de 25%% é R$%2.f",novoSalario);    

return 0;
}