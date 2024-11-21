/* Fa�a um programa que receba tr�s notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.  */

//estrutura sequêncial

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    
    float notas[3];
    int peso[3];
    int i;
    float somaNotasPesos = 0, somaPesos = 0;

    for(i=0; i< 3; i++) {
    printf("Digite a nota %d \n", i + 1);
    scanf("%f",&notas[i]);

    printf("Digite o peso da nota %d: \n", i + 1);
    scanf("%d", &peso[i]);    

    somaNotasPesos += notas[i] * peso[i];
    somaPesos += peso[i];
    }
    float mediaPonderada = somaNotasPesos/somaPesos;
    printf("A media ponderada das 3 notas � %2.f",mediaPonderada);
    

    return 0;
}