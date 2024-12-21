/*Um funcion�rio de uma empresa recebe
aumento salarial anualmente. Sabe-se que:
a) esse funcion�rio foi contratado em 2015, com sal�rio inicial de R$ 1.000,00;
b) em 2016 recebeu aumento de 1,5% sobre seu sal�rio inicial;
c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
da porcentagem do ano anterior.
Fa�a um programa que receba o ano atual determine o sal�rio atual desse funcion�rio.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    // Vari�veis principais
    float salarioInicial = 1000.0;
    float salarioAtual = salarioInicial;
    float perc_aumento = 0.015; // 1,5% como decimal
    int anoAtual, ano;

    // Entrada do ano atual
    printf("Insira o ano atual: \n");
    scanf("%d", &anoAtual);

    // Valida��o do ano informado
    if (anoAtual < 2015) {
        printf("O ano informado deve ser 2015 ou posterior. \n");
        return 1; // Finaliza o programa
    }

    // C�lculo dos aumentos anuais
    for (ano = 2016; ano <= anoAtual; ano++) {
        float aumento = salarioAtual * perc_aumento; // Calcula o aumento
        salarioAtual += aumento;                     // Atualiza o sal�rio somando o aumento
        perc_aumento *= 2;                           // Dobra o percentual para o pr�ximo ano
    }

    // Sa�da do sal�rio atual
    printf("O sal�rio do funcion�rio em %d �: R$ %.2f\n", anoAtual, salarioAtual);

    return 0;
}
