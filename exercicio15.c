/* Sabe-se que:
1 pé = 12 polegadas;
1 jarda = 3 pés;
1 milha = 1760 jardas;

Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre
os resultados.
a) polegadas;
b) jardas;
c) milhas */

#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese");
    
    int pes;
    int poleg,jardas,milhas; 

    printf("Digite a medida em pés: ");
    scanf("%d",&pes);
    poleg = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    printf("\nValor inserido me pes: %d \n",pes);
    printf("Valor inserido convertido para polegadas: %d\n", poleg);
    printf("Valor inserido convertido para jardas: %d\n",jardas);
    printf("Valor inserido convertido para milhas: %d\n", milhas);
    printf("----------------------------------------\n");




    return 0;
}