/*Um funcionário de uma empresa recebe
aumento salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
da porcentagem do ano anterior.
Faça um programa que receba o ano atual determine o salário atual desse funcionário.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    // Variáveis principais
    float salarioInicial = 1000.0;
    float salarioAtual = salarioInicial;
    float perc_aumento = 0.015; // 1,5% como decimal
    int anoAtual, ano;

    // Entrada do ano atual
    printf("Insira o ano atual: \n");
    scanf("%d", &anoAtual);

    // Validação do ano informado
    if (anoAtual < 2015) {
        printf("O ano informado deve ser 2015 ou posterior. \n");
        return 1; // Finaliza o programa
    }

    // Cálculo dos aumentos anuais
    for (ano = 2016; ano <= anoAtual; ano++) {
        float aumento = salarioAtual * perc_aumento; // Calcula o aumento
        salarioAtual += aumento;                     // Atualiza o salário somando o aumento
        perc_aumento *= 2;                           // Dobra o percentual para o próximo ano
    }

    // Saída do salário atual
    printf("O salário do funcionário em %d é: R$ %.2f\n", anoAtual, salarioAtual);

    return 0;
}
