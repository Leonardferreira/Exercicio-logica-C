/*Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2*/

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
    printf("Área do triângulo: %.2f",area);


    return 0;
}

