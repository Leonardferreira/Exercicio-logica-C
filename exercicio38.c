/*Desenvolva um algoritmo que pe�a para o usu�rio inserir v�rios n�meros inteiros. O
algoritmo dever� contabilizar a quantidade de n�meros positivos informados. Caso o
usu�rio digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar*/

#include <stdio.h>
#include <locale.h>

int main(){

    int numero,contador =0;
    setlocale(LC_ALL,"portuguese");

    do {
        printf("Digite um n�mero: ");
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