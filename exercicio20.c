/*Desenvolva um algoritmo que receba dois n�meros, calcule e mostre a multiplica��o
entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a
subtra��o do primeiro pelo segundo. Caso contr�rio, mostre a soma entre os dois.
*/
#include <stdio.h>
#include <locale.h>



int main(){

    setlocale(LC_ALL,"portuguese");

    int numb1, numb2;

    printf("Insira o primeiro valor: \n");
    scanf("%d", &numb1);
    printf("Insira o segundo valor: \n");
    scanf("%d", &numb2);

    if (numb1 == numb2){
        printf("A multiplica��o dos valores digitados �\n: %d", numb1 * numb2);
    }
    else if (numb1 > numb2){
        printf("A subtra��o de %d-%d �: %d\n",numb1,numb2,numb1-numb2);
    }else
    {
        printf("A soma dos valores %d + %d �\n: %d",numb1,numb2,numb1+numb2);
    }
    
    return 0;
}