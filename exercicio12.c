/*) Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor
total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50,
20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba
o menor número de notas possível.*/


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int valor; // valor total a ser sacado
    int cedulas[] = {100,50,20,10,5,2}; // array com os valores de cada nota
    int qtdCedulas[6]={0}; // array para guardar a quantidade de cada cedula utilizada
    int i;

    printf("Insira o valor a sacar: ");
    scanf("%d", &valor);

    for(i = 0; i <6; i++){
        qtdCedulas[i] = valor /cedulas[i];
        valor %=cedulas[i];
    }
    for(i = 0; i <6; i++){
        printf("número de notas de: R$%d,00  %d\n",cedulas[i],qtdCedulas[i]);
    }

    return 0;
}