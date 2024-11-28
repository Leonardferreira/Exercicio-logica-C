/*Fa�a um programa que mostre o menu de
op��es a seguir, receba a op��o do usu�rio e dos dados necess�rios para executar cada
opera��o. Suponha que o usu�rio n�o ir� inserir valores inv�lidos.*/

#include <locale.h>
#include <stdio.h>
#include <math.h>
// fun��o menu
void menu(){
    printf(" Menu de op��es \n");
    printf("1-Somar dois n�meros \n");
    printf("2-Raiz quadrada de um n�mero:  \n");
    printf("3-Para sair \n");
    printf("Digite a op��o desejada: \n");
}

int main(){

    int opcao;
    float number1,number2,soma,quadrado;
    setlocale(LC_ALL,"portuguese");
    // inicio do loop com do while
    do {        
        // chamando a fun��o menu
        menu();
        scanf("%d",&opcao);

        if(opcao == 1){
            printf("Insira o primeiro valor: \n");
            scanf("%f",&number1);
            printf("Insira o segundo valor: \n");
            scanf("%f",&number2);
            soma = number1 + number2;
            printf("Valor da soma � %.2f\n",soma);
        }else if(opcao == 2){
            printf("Insira o valor: \n");
            scanf("%f",&number1);
            if(number1 <0){
                printf("Por favor insira um valor positivo: \n");
                break;
            }
            quadrado = sqrt(number1);
            printf("A raiz quadrada de %.2f, � %.2f \n",number1,quadrado);
        }

    }while(opcao !=3);
    printf("Voc� saiu do programa. \n");

    return 0;
}