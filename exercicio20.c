/*Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação
entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a
subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.
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
        printf("A multiplicação dos valores digitados é\n: %d", numb1 * numb2);
    }
    else if (numb1 > numb2){
        printf("A subtração de %d-%d é: %d\n",numb1,numb2,numb1-numb2);
    }else
    {
        printf("A soma dos valores %d + %d é\n: %d",numb1,numb2,numb1+numb2);
    }
    
    return 0;
}