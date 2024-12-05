/*Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo
que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1*/

#include <stdio.h>
#include <locale.h>
int main(){

    int numbFato,resultado = 1;
    setlocale(LC_ALL,"portuguese");
    
    printf("Insira o um valor: \n");
    scanf("%d",&numbFato);
    if(numbFato < 0){
        printf("Erro: apenas valores positivos \n");
        return 1;
    }
    for(int i= numbFato; i > 1; i--){
            resultado *= i;
    }

    printf("O fatorial de %d é %d \n",numbFato,resultado);

    return 0;
}