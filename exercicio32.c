/*Desenvolva um algoritmo que some todos os n�meros inteiros compreendidos entre 1
e 10 (inclusive). */

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, soma = 0;

    for (i = 1; i <= 10; i++){
        soma += i;

    }
    printf("Soma total dos valores: %d \n", soma);
    return 0;
}
