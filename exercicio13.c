/*Faça um programa que receba um número  positivo e maior que zero, calcule e mostre:

a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){

    int valor = 0;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um número positivo: \n");
    scanf("%d",&valor);

    
    if(valor <=0){
        printf("Valor invalido!! ,digite um valor positivo \n");
        return 0;
    }
    
    printf("Valor digitado: %d \n",valor);
    
    printf("O valor digitaddo ao quadrado é %d\n", valor * valor);
    printf("O valor digitaddo ao cubica é  %d\n", valor * valor * valor);
    printf("O valor digitaddo sua raiz quadrada é %.2f\n",sqrt(valor)); //sqrt raiz quadrada
    printf("O valor digitaddo sua cubica é %.2f\n", cbrt(valor)); // cbrt raiz cubica
    return 0;
}