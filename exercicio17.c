/*Fa�a um programa que receba dois n�meros e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os
n�meros s�o iguais".
*/

#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float n1,n2;
printf("\n------------Qual � o maior n�mero----------\n");

printf("Insira o primeiro n�mero: ");
scanf("%f",&n1);
printf("Insira o segundo valor:  ");
scanf("%f",&n2);
    
    if(n1 > n2){
        printf("O maior � %.1f\n",n1);
    }else if(n1 < n2){
        printf("O maior � %.1f\n",n2);
    }else{
        printf("Os valores s�o iguais. \n");
    }

return 0;
}