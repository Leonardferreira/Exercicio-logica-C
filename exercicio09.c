/*Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2*/
//estrutura sequêncial
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    float area,base,altura;

    printf("Insira a base: ");
    scanf("%f", &base);
    printf("insira altura: ");
    scanf("%f", &altura);

    area = base * altura /2;
    printf("�rea do tri�ngulo: %.2f",area);


    return 0;
}

