/*Fa�a um programa que receba o sal�rio deum funcionário, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um
aumento de 25%. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float salario, novoSalario;

printf("Calcular sal�rio com aumento de 25%% \n");
printf("Digite seu sal�rio atual: \n");
scanf("%f", &salario);

novoSalario = salario + (salario * 0.25);
printf("Seu novo sal�rio com aumento de 25%% � R$%2.f",novoSalario);    

return 0;
}