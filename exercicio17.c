/*Faça um programa que receba dois números e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os
números são iguais".
*/

#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float n1,n2;
printf("\n------------Qual é o maior número----------\n");

printf("Insira o primeiro número: ");
scanf("%f",&n1);
printf("Insira o segundo valor:  ");
scanf("%f",&n2);
    
    if(n1 > n2){
        printf("O maior é %.1f\n",n1);
    }else if(n1 < n2){
        printf("O maior é %.1f\n",n2);
    }else{
        printf("Os valores são iguais. \n");
    }

return 0;
}