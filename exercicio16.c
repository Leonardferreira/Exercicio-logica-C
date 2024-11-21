/* Fa�a um programa que receba o ano de nascimento de uma pessoa e ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos essa pessoa ter� em 2030;*/

//estrutura sequêncial

#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese");

    int anoNasci,anoAtual;
    int ano30 =2030;


    printf("Digite seu ano de nascimento: \n");
    scanf("%d",&anoNasci);

    printf("Digite o nao atual: ");
    scanf("%d",&anoAtual);

    printf("Idade atual: %d \n",anoAtual -anoNasci);
    printf("Idade em 20230: %d \n", ano30 - anoNasci);

    return 0;
}