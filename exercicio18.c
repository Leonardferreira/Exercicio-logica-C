/*Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir
"Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros
dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a
mensagem: "Erro"."*/

#include <stdio.h>
#include <locale.h>

int main(){

float numb1,numb2,numb3;

setlocale(LC_ALL,"portuguese");

printf("Insira o primeiro número: ");
scanf("%f",&numb1);
printf("Insira o segundo número: ");
scanf("%f",&numb2);
printf("Insira o terceiro número: ");
scanf("%f",&numb3);

if(numb1 > numb2 && numb1 > numb3){
    printf("Condição satisfeita\n");
}else{
    printf("Erro");
}

    return 0;
}