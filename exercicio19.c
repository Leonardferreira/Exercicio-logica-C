/*Fa�a um programa que receba um n�mero inteiro e verifique se esse n�mero � par ou �mpar.*/

#include <stdio.h>
#include <locale.h>
int main(){
    
    setlocale(LC_ALL,"portuguese");
    int numb1;
    
    printf("insira o valor:\n ");
    scanf("%d",&numb1);

    if(numb1 % 2 == 0){
        printf("O n�mero � par");

    }else{
        printf("o n�mero � impar");
    }

    return 0;
}