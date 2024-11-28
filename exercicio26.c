/*Faça um programa que receba três números
obrigatoriamente em ordem crescente e um quarto número que não siga esta regra.
Mostre, em seguida, os quatro números em ordem não-crescente.*/

#include <stdio.h>
#include <locale.h>

int main(){

    int number1,number2,number3,number4,aux;
    setlocale(LC_ALL,"portuguese");

    printf("Escreva 3 números em ordem crescente \n");
    
    printf("Insira o primeiro valor: \n");
    scanf("%d",&number1);
    printf("Insira o segundo valor: \n");
    scanf("%d",&number2);
    printf("Insira o terceiro valor: \n");
    scanf("%d",&number3);
    printf("Insira o quarto valor: \n");
    scanf("%d",&number4);

    if(!(number1 < number2 && number2 < number3)){
        printf("Os três primeiros números devem ser inseridos em ordem crescente (exemplo: 1, 2, 3).\n");
        return 1;
    }
    if(number1 < number2){aux = number1; number1 = number2; number2 = aux;}
    if(number1 < number3){aux = number1; number1 = number3; number3 = aux;}
    if(number1 < number4){aux = number1; number1 = number4; number4 = aux;}
    if(number2 < number3){aux = number2; number2 = number3; number3 = aux;}
    if(number2 < number4){aux = number2; number2 = number4; number4 = aux;}
    if(number3 < number4){aux = number3; number3 = number4; number4 = aux;}
    
    
    printf("Valores digitados em ordem decrescente: %d,%d,%d,%d \n",number1,number2,number3,number4);
    return 0;
}