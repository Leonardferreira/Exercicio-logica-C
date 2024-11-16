/*Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro. */


#include <stdio.h>
#include <locale.h>
#include <math.h>

void menu(){
    printf("\n=====================\n");
    printf(" Programa de Potência\n");
    printf("=====================\n");
    printf("Este programa calcula um número elevado ao outro \n");
    printf("=====================\n");

}

int main(){
    setlocale(LC_ALL,"portuguese");
    float numb1,numb2, resultado;

    menu();
    printf("Digite o primeiro valor: \n");
    scanf("%f", &numb1);
    printf("Digite o segundo valor: \n");
    scanf("%f",&numb2);
    if (numb1 <=0 || numb2 <=0){ 
        printf("Erro: Ambos os números devem ser maiores que zero. \n");
        return 0;
    } 



    resultado = pow(numb1,numb2);
    printf("O número %.2f elevado á %.2f é: %.2f",numb1,numb2,resultado);

    return 0;
}