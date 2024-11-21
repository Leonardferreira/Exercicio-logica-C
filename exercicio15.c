/* Sabe-se que:
1 p� = 12 polegadas;
1 jarda = 3 p�s;
1 milha = 1760 jardas;

Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre
os resultados.
a) polegadas;
b) jardas;
c) milhas */
//estrutura sequêncial


#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese");
    
    int pes;
    int poleg,jardas,milhas; 

    printf("Digite a medida em p�s: ");
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