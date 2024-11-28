/*  Desenvolva um algoritmo que pe�a ao usu�rio que informe os coeficientes a, b e c de
uma equa��o de segundo grau: ax� + bx + c. Com base na F�rmula de Bhaskara, calcule
e mostre as ra�zes da respectiva equa��o de segundo grau*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int main(){

    float a,b,c,delta;
    float x1,x2;

    setlocale(LC_ALL,"portuguese");

    printf("==== Resolvendo Equa��o do segundo grau ===\n");
    printf("Insira o coeficiente a: \n");
    scanf("%f",&a);
    printf("Insira o coeficiente b: \n");
    scanf("%f",&b);
    printf("Insira o coeficiente c: \n");
    scanf("%f",&c);

    // verifica��o se � uma equa��o de 2�Grau
    if (a == 0){
        printf("Voc� esta digitando uma equa��o de 1� Grau, 'a' deve ser difernte de 0");
        return 1;
    }
   
    // Calculando o delta
    delta = (b * b) - (4 * a * c);
    printf("Calculando o Delta ....\n");
    Sleep(1000); //pausa de 3 segundos

    printf("\nValor do DELTA: %.2f \n",delta);
    if(delta > 0){
        printf("\nDuas ra�zes reais e diferentes \n");
    }else if(delta == 0){
        printf("\nUma raiz real (as duas s�o iguais) \n");
    }else{
        printf("\nDelta � negativo, indicando ra�zes complexas.\n");
        printf("Fim do programa!\n");
        return 1;
    }

    printf("\n ==== Calculando x1 ==== \n");
    x1 = (-b + sqrt(delta)) / (2*a);
    printf("A primeira raiz �: %.2f \n",x1);
    
    printf("\n ==== Calculando x2 ==== \n");
    x2 = (-b - sqrt(delta)) / (2*a);
    printf("A segunda raiz �: %.2f \n",x2);

    return 0;
}