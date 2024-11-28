/* Faça um programa que receba quatro
valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos.
Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado
para I seja sempre um valor válido, ou seja, 1, 2 ou 3.*/
#include <stdio.h>


int main(){
    int i;
    float a,b,c,temp;

    printf("Insira o valor de I (1 - 2 - 3): \n");
    scanf("%d",&i);

    if(i <= 0 || i >3){
        printf("Valor invalido, o valor de I deve ser um valor inteiro positivo entre 1 e 3 \n");
        return 0;
    }
    // Entrada dos dados, levando em consideração que é a mesma para todos os casos.
    printf("Insira o valor de A: \n");
    scanf("%f",&a);
    printf("Insira o valor de B: \n");
    scanf("%f",&b);
    printf("Insira o valor de C: \n");
    scanf("%f",&c);
    
   if(i == 1){
        // ordem crescente
        if(a >b){temp = a;a = b;b = temp;}
        if(b >c){temp = b;b = c;c = temp;}
        if(a >b){temp = a;a = b;b = temp;}
        printf("Valores digitados em ordem crescente: %.2f,%.2f,%.2f",a,b,c);
    }else if(i == 2){
        // ordem decrecente
        if(a < b){temp = a;a = b;b = temp;}
        if(b < c){temp = b;b = c;c = temp;}
        if(a < b){temp = a;a = b;b = temp;}
        printf("Valores digitados em ordem descrecente: %.2f,%.2f,%.2f",a,b,c);
    }else{
        if(a > b && a > c){printf("O maior valor estara no meio: %.2f,%.2f,%.2f \n",b,a,c);}
        if(b > a && b > c){printf("O maior valor estara no meio: %.2f,%.2f,%.2f \n",a,b,c);}
        if(c > a && c > b){printf("O maior valor estara no meio: %.2f,%.2f,%.2f \n",a,c,b);}
    }

    return 0;
}