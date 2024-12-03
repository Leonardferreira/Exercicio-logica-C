/*Faça um programa que receba a hora de início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras:
hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o
tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e
terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min
até as 23hr29min.*/

#include <stdio.h>
#include <locale.h>

int main(){

    int hora_inicio,min_inicio,hora_fim,min_fim;
    int total_minInicio, total_minFinal, duracao_minutos, duracao_horas, duracao_minutos_restantes;
    setlocale(LC_ALL,"portuguese");

    printf("===== Insira o horário de início do jogo =====\n");
    printf("Hora inicial: \n");
    scanf("%d",&hora_inicio);
    
    if(hora_inicio < 0 || hora_inicio > 23){
        printf("Erro: Hora inválida! Deve estar entre 0 e 23.\n");
        return 1;
    }
    printf("Minutos: \n");
    scanf("%d",&min_inicio);
    if(min_inicio < 0 || min_inicio >= 59){
        printf("Erro: Minuto inválido! Deve estar entre 0 e 59.\n");
        return 1;
   }
    
    printf("===== Insira as horas e minutos do final do jogo ===== \n");
    printf("Hora final: \n");
    scanf("%d",&hora_fim);
    if (hora_fim < 0 || hora_fim > 23) {
        printf("Erro: Hora final inválida! Deve estar entre 0 e 23.\n");
        return 1; // Encerra o programa
    }
    printf("Minutos: \n");
    scanf("%d",&min_fim);
     if (min_fim < 0 || min_fim > 59) {
        printf("Erro: Minutos finais inválidos! Deve estar entre 0 e 59.\n");
        return 1; // Encerra o programa
    }

    // Converte os horários para minutos totais do dia
    total_minInicio = (hora_inicio * 60) + min_inicio;
    total_minFinal = (hora_fim * 60) + min_fim;

    // calculando a duração em minutos
    if (total_minFinal >= total_minInicio){
        // Caso o jogo termine no mesmo dia
        duracao_minutos = total_minFinal - total_minInicio;
    }else{
        // caso o jogo ultrapasse a meia-noite
        duracao_minutos = (24 * 60 - total_minInicio) + total_minFinal;
    }
    // Convertendo a duração de minutos para horas e minutos
    duracao_horas = duracao_minutos / 60; // horas totais
    duracao_minutos_restantes = duracao_minutos % 60; // mminutos restantes

    // Exibe o resultado
    printf("O jogo durou %d horas e %d minutos.\n", duracao_horas, duracao_minutos_restantes);

    return 0;
}