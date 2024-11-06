/* Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário
tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
    setlocale(LC_ALL,"portuguese");
    float salaBase, aumento;
    char resposta[4]; // arry para resposta do tipo 'sim' ou não

    printf("Digite seu salário base: \n");
    scanf("%f", &salaBase);
    //Verificar aumento padrão de 5% ou mais
    printf("Recebeu aumento maior que 5%%: (sim/não) \n");
    scanf("%3s",resposta); // por ser uma arry não é necessário utilizar &
   
    // Estrutura if 
    if(strcmp (resposta, "sim") ==0){
        printf("Digite o percentual de aumento: \n");
        scanf("%f", &aumento);
        salaBase += salaBase * (aumento/100)  - salaBase * 0.07; // aumento do salário com base no valor solicitado,menos 7%
        printf("Seu salário é R$%2.f \n",salaBase);
    
    }else {
        salaBase += salaBase * 0.05 - salaBase * 0.07;
        printf("Salário a receber com aumento padrão mais decontos de 7%%, R$%2.f", salaBase);
    }

}