/*Faça um programa que mostre o menu de
opções a seguir, receba a opção do usuário e dos dados necessários para executar cada
operação. Suponha que o usuário não irá inserir valores inválidos.*/

#include <locale.h>
#include <stdio.h>
#include <math.h>
// função menu
void menu(){
    printf(" Menu de opções \n");
    printf("1-Somar dois números \n");
    printf("2-Raiz quadrada de um número:  \n");
    printf("3-Para sair \n");
    printf("Digite a opção desejada: \n");
}

int main(){

    int opcao;
    float number1,number2,soma,quadrado;
    setlocale(LC_ALL,"portuguese");
    // inicio do loop com do while
    do {        
        // chamando a função menu
        menu();
        scanf("%d",&opcao);

        if(opcao == 1){
            printf("Insira o primeiro valor: \n");
            scanf("%f",&number1);
            printf("Insira o segundo valor: \n");
            scanf("%f",&number2);
            soma = number1 + number2;
            printf("Valor da soma é %.2f\n",soma);
        }else if(opcao == 2){
            printf("Insira o valor: \n");
            scanf("%f",&number1);
            if(number1 <0){
                printf("Por favor insira um valor positivo: \n");
                break;
            }
            quadrado = sqrt(number1);
            printf("A raiz quadrada de %.2f, é %.2f \n",number1,quadrado);
        }

    }while(opcao !=3);
    printf("Você saiu do programa. \n");

    return 0;
}