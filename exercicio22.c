/*Desenvolva um algoritmo que pe�a para que o usu�rio informe a base e a altura de um
ret�ngulo, e um terceiro n�mero inteiro "op". Caso o usu�rio escolha "op" igual a 0,
calcule e mostre o per�metro do ret�ngulo. Caso o usu�rio insira um valor 1 para "op",
calcule e mostre a �rea do ret�ngulo. Se o usu�rio inserir um valor diferente de 0 e 1
para "op", mostrar a mensagem "Op��o inv�lida.".
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    float base,altura;
    int op;

    printf("Insira � base do ret�ngulo: \n");
    scanf("%f",&base);
    printf("Insira � altura do ret�ngulo: \n");
    scanf("%f",&altura);
    if(base <=0 || altura <=0){
        printf("Base e altura deve ser n�meros positivos ");
        return 1;
    }
    printf("Qual opera��o deseja realizar 0 para calcular perimetro 1 calcular a �rea: \n");
    scanf("%d",&op);

    switch (op)
    {
    case 0:
        printf("Calculado o do perimetro...\n");
        printf("Perimetro do ret�ngulo � %.2f\n", 2*(base + altura));
        break;
    case 1:
        printf("Calculando a �rea do ret�ngulo...\n");
        printf("A �rea do ret�ngulo � %.2f\n",base * altura);
        break;
    default:
        printf("Op��o inv�lida\n");
        break;
    }
    return 0;
}