/* Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se que esse funcion�rio
tem gratifica��o de 5% sobre o sal�rio-base e paga imposto de 7% sobre o sal�rio-base.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//estrutura sequêncial
int main(){
    setlocale(LC_ALL,"portuguese");
    float salaBase, aumento;
    char resposta[4]; // arry para resposta do tipo 'sim' ou n�o

    printf("Digite seu sal�rio base: \n");
    scanf("%f", &salaBase);
    //Verificar aumento padr�o de 5% ou mais
    printf("Recebeu aumento maior que 5%%: (sim/n�o) \n");
    scanf("%3s",resposta); // por ser uma arry n�o � necess�rio utilizar &
   
    // Estrutura if 
    if(strcmp (resposta, "sim") ==0){
        printf("Digite o percentual de aumento: \n");
        scanf("%f", &aumento);
        salaBase += salaBase * (aumento/100)  - salaBase * 0.07; // aumento do sal�rio com base no valor solicitado,menos 7%
        printf("Seu sal�rio � R$%2.f \n",salaBase);
    
    }else {
        salaBase += salaBase * 0.05 - salaBase * 0.07;
        printf("Sal�rio a receber com aumento padr�o mais decontos de 7%%, R$%2.f", salaBase);
    }

}