/*Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor
total depois do rendimento.*/

//estrutura sequêncial
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float dep,rendi,valorTotal;
    int tax;

    printf("Insira o valora do deposito: \n");
    scanf("%f", &dep);
    printf("Insira a taxa a.m: \n");
    scanf("%d",&tax);

    rendi = (dep * tax)/100;

    valorTotal = dep + rendi;
    printf("Rendimento: %.2f \n",rendi);
    printf("Valor total: %.2f \n", valorTotal);

    return 0;
}