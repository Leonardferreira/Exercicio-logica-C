/*faça um programa que receba três notas,calcule e mostre a mï¿½dia aritmï¿½tica entre elas.*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    float numb[3];
    int i;
    float counter = 0;
    float avg;
    printf("Programa calcular media das 3 notas \n");
    for (i=0; i <3; i++) {
        if (i == 0) {
            printf("Digite a primeira nota: \n");
        }
        else if (i == 1){
            printf("Digite a segunda nota: \n");
        }
        else {
            printf("Digite a terceira nota: \n ");
        }
    scanf("%f", &numb[i]);
    counter += numb[i];
    }
    avg = counter /3;
    printf("A mÃ©dia das notas digitadas são: %2.f", avg);   
    
    return 0;
}