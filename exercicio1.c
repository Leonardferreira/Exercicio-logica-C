/*Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese_Brazil");
    
    int numb[4];
    int i;
    int contador = 0;
    for (i= 0; i < 4; i++) {
        if (i == 0){
            printf("Digite o primeiro valor: \n");
        }
        else if (i == 1) {
            printf("Digite o segundo valor: \n");
        }
        else if (i == 2) {
            printf("Digite o terceiro valor: \n");
        }
        else{
            printf("Digite o quarto valor: \n");
        }
        scanf("%d", &numb[i]);
        contador += numb[i];
    }
    printf("A soma dos valores digitados é %d \n", contador );
    return 0;
}
