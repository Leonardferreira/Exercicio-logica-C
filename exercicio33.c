/*Desenvolva um algoritmo que receba dois n�meros inteiros positivos A e B. Exiba na tela
todos os n�meros inteiros compreendidos entre A e B, excluindo os pr�prios A e B.
Suponha que o usu�rio respeite o enunciado e insira valores v�lidos para A e B.*/


#include <stdio.h>
#include <locale.h>

int main(){

    int A,B,menor,maior;
    setlocale(LC_ALL,"portuguese");

    printf("Insira o valor de A: \n");
    scanf("%d",&A);
    if(A < 0){
        printf("Erro: Apenas valores inteiros pos�tivos \n");
        return 1;
    }
    printf("Insira o valor de B: \n");
    scanf("%d",&B);

    if(A < B){
        menor = A;
        maior = B; 
    }else{
        menor = B;
        maior = A;
    }
    printf("S�rie num�rica: \n");
    for(int i = menor + 1; i < maior; i ++){
        printf("%d", i);
    }

    return 0;
}