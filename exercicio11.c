/*Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos.
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em
segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo
cronometrado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int totalSeg,horas,minutos,seg;

    printf("Insira o tempo em segundos: \n");
    scanf("%d", &totalSeg);

    horas = totalSeg / 3600; // retirando as horas dos segundos
    totalSeg = totalSeg % 3600; // verificando os segundos que restaram

    minutos =  totalSeg /60;
    totalSeg = totalSeg % 60;

    seg = totalSeg;
    printf("Horas: %d \n",horas);
    printf("Minutos: %d \n",minutos);
    printf("Segundos: %d \n", seg);

    return 0;
}