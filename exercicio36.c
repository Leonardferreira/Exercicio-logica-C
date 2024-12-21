/*Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em m�dia 2,1 cent�metros
ao ano. Seu irm�o, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em m�dia 1,1
cent�metro por ano. Elabore um programa que conte quantos anos ser�o necess�rios
para que a altura de Charlinho ultrapasse a de Bossa*/

#include <stdio.h>
#include <locale.h>


int main(){

    float altura_charlinho,altura_bossa,taxaCres_charlinho,taxaCres_bossa;
    int anos = 0;

    // Iniciando as vari�veis
    altura_charlinho = 1.40;
    altura_bossa = 1.45;
    taxaCres_charlinho = 0.021; // em metros
    taxaCres_bossa = 0.011; // em metros

    // iniciando loop while, enquanto altura de charlinho <= altura bossa, loop para quando a altura de charlinho for maior que bossa
    while (altura_charlinho <= altura_bossa){
        // iniciando calculo no loop
        altura_charlinho += taxaCres_charlinho;
        altura_bossa += taxaCres_bossa;
        anos ++;
    }
    printf("Em %d anos, Charlinho passara a altura de bossa \n",anos);

    return 0;
}