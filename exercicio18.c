/*Desenvolva um algoritmo que receba tr�s n�meros. O algoritmo deve imprimir
"Condi��o satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros
dois (o primeiro n�o pode ser igual a nenhum). Caso contr�rio, deve ser impressa a
mensagem: "Erro"."*/

#include <stdio.h>
#include <locale.h>

int main(){

float numb1,numb2,numb3;

setlocale(LC_ALL,"portuguese");

printf("Insira o primeiro n�mero: ");
scanf("%f",&numb1);
printf("Insira o segundo n�mero: ");
scanf("%f",&numb2);
printf("Insira o terceiro n�mero: ");
scanf("%f",&numb3);

if(numb1 > numb2 && numb1 > numb3){
    printf("Condi��o satisfeita\n");
}else{
    printf("Erro");
}

    return 0;
}