/*Fa�a um programa que receba o sal�rio de
um funcion�rio, calcule e mostre o novo sal�rio desse funcion�rio, acrescido de
bonifica��o e de aux�lio-escola.*/


#include <stdio.h>
#include <locale.h>
float auxi_escola = 150.00,auxi_escola1 = 100.00; // sal�rio acima de 600 recebe 100 de auxi-escola

int main(){

float salario_base;
float bonificacao = 0.05;

setlocale(LC_ALL,"portuguese");

printf("Insira seu sal�rio base: \n");
scanf("%f",&salario_base);

// verifica��o entrada s�lario
if(salario_base < 0){
    printf("Erro: O sal�rio base n�o pode ser negativo. \n");
    return 1;
}

if(salario_base <= 500){
    salario_base += (salario_base * bonificacao) + auxi_escola;
    printf("Sal�rio Total: R$%.2f \n",salario_base);
}else if(salario_base >501 && salario_base <=600){
    salario_base += (salario_base * 0.12) + auxi_escola;
    printf("Sal�rio Total: R$%.2f \n",salario_base);
}else if(salario_base > 600 && salario_base <=1200){
    salario_base += (salario_base * 0.12) + auxi_escola1;
    printf("Sal�rio Total: R$%.2f \n",salario_base);
}else{
    salario_base +=  auxi_escola1;
    printf("Sal�rio Total: R$%.2f \n",salario_base);
}

return 0;
}