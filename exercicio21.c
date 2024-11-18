/*Desenvolva um algoritmo que simule uma calculadora. Voc� deve dar a op��o de o
usu�rio escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usu�rio s�
conseguir� processar dois n�meros inteiros por vez*/



#include <stdio.h>
#include <locale.h>

void opcao(){
    printf("\n--------Calculadora simples----------\n");
    printf("1-Soma\n");
    printf("2-Subtrair\n");
    printf("3-Multiplicar\n");
    printf("4-Dividir\n");
    printf("5-Sair\n");
    printf("----------------------------------------\n");
    printf("Escolha um op��o: ");
}
int main(){
    setlocale(LC_ALL,"portuguese");
    int escolha;
    float numb1,numb2,resultado;
    do {
        opcao();
        scanf("%d",&escolha);

        switch (escolha){
        case 1:
            printf("Digite o primeiro valor: ");
            scanf("%f",&numb1);
            printf("Digite o segundo valor: ");
            scanf("%f",&numb2);
            resultado = numb1 + numb2;
            printf("O resultado da soma: %.2f\n",resultado);
            break;
        case 2:
            printf("Digite o primeiro valor: ");
            scanf("%f",&numb1);
            printf("Digite o segundo valor: ");
            scanf("%f",&numb2);
            resultado = numb1 - numb2;
            printf("O resultado da subtra��o: %.2f\n",resultado);
            break;
        case 3:
            printf("Digite o primeiro valor: \n");
            scanf("%f",&numb1);
            printf("Digite o segundo valor: \n");
            scanf("%f",&numb2);
            resultado = numb1 * numb2;
            printf("O resultado da multiplica��o: %.2f\n",resultado);
            break;
        case 4:
            printf("Digite o primeiro valor: \n");
            scanf("%f",&numb1);
            printf("Digite o segundo valor: \n");
            scanf("%f",&numb2);
            if(numb2 !=0){
                resultado = numb1 / numb2;
                printf("Resultado da divis�o: %.2f\n",resultado);
            }else{
                printf("Erro: Divis�o por zero n�o � permitida\n");
            }
        case 5:
            printf("Saindo do programa\n");
            break;
        default:
            printf("Op��o inv�lida!");
            break;
        }

    }while (escolha !=5);
    
    return 0;
}