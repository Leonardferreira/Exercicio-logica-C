/*Fa�a um programa que receba tr�s n�meros
distintos e mostre-os em ordem crescente.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int numb1,numb2,numb3;
    int temp;

    // receber os 3 valores:
    printf("Insira o primeiro valor: \n");
    scanf("%d",&numb1);
    
    printf("Insira o segundo valor: \n");
    scanf("%d",&numb2);
    
    printf("Insira o terceiro valor: \n");
    scanf("%d",&numb3);

    // Verificar se os n�meros s�o distintos:
    if(numb1 == numb2 || numb1 == numb3 || numb2 == numb3){
        printf("Os n�meros devem ser distintos!\n");
        return 1;
    }

    // Ordenar os valroes em ordem crescente, usando trocas
    if(numb1 > numb2){temp = numb1; numb1 = numb2; numb2 = temp;}
    if(numb2 > numb3){temp = numb2; numb2 = numb3;numb3 =temp;}
    if(numb1 > numb2){temp = numb1; numb1 = numb2; numb2 = temp;} // Necess�rio mais uma verifica��o ap�s comparar numb2 > numb3.
    printf("ordem: %d,%d,%d",numb1,numb2,numb3);
    

    return 0;
}