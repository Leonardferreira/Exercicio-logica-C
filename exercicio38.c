/*Desenvolva um algoritmo que peça para o usuário inserir vários números inteiros. O
algoritmo deverá contabilizar a quantidade de números positivos informados. Caso o
usuário digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar*/

#include <stdio.h>
#include <locale.h>

int main(){

    int numero,contador =0;
    setlocale(LC_ALL,"portuguese");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero == 0){
            break;
        }
        if (numero > 0){
            contador ++;
        }
    }while(numero != 0);
        printf("Quantidade de numeros positivos: %d\n", contador);
    return 0;
}