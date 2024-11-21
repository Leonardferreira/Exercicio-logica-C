/*Fa�a um programa que receba um n�mero  positivo e maior que zero, calcule e mostre:

a) o n�mero digitado ao quadrado;
b) o n�mero digitado ao cubo;
c) a raiz quadrada do n�mero digitado;
d) a raiz c�bica do n�mero digitado.
*/
//estrutura sequêncial
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){

    int valor = 0;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um n�mero positivo: \n");
    scanf("%d",&valor);

    
    if(valor <=0){
        printf("Valor invalido!! ,digite um valor positivo \n");
        return 0;
    }
    
    printf("Valor digitado: %d \n",valor);
    
    printf("O valor digitaddo ao quadrado � %d\n", valor * valor);
    printf("O valor digitaddo ao cubica �  %d\n", valor * valor * valor);
    printf("O valor digitaddo sua raiz quadrada � %.2f\n",sqrt(valor)); //sqrt raiz quadrada
    printf("O valor digitaddo sua cubica � %.2f\n", cbrt(valor)); // cbrt raiz cubica
    return 0;
}