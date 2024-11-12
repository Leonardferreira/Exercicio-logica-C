/*Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// #define p 3.14

int main(){
    setlocale(LC_ALL,"portuguese");

    float raio,pi=3.14,area; // -> pi poderia estar junto ao include como #define p 3.14

    printf("Insira o raio do circulo: \n");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    printf("Área do circulo: %.2f. \n", area);


    return 0;
}