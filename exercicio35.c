/*Desenvolva um algoritmo que receba um nÃºmero N e imprima a tabuada de N, na tela*/


#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL,"portuguese");

    printf("Insira um número inteiro para verificar sua tabuada: \n");
    scanf("%d",&num);
    
    printf("\nTabuada do %d \n",num);
    
    for(int i = 1; i <= 10; i ++){
        printf("%d x %d = %d \n",num,i,num * i);
    }
    return 0;
}