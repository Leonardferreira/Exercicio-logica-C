/*Faça um programa que receba um número inteiro e verifique se esse número é par ou ímpar.*/

#include <stdio.h>
#include <locale.h>
int main(){
    
    setlocale(LC_ALL,"portuguese");
    int numb1;
    
    printf("insira o valor:\n ");
    scanf("%d",&numb1);

    if(numb1 % 2 == 0){
        printf("O número é par");

    }else{
        printf("o número é impar");
    }

    return 0;
}