/*Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um
retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0,
calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op",
calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1
para "op", mostrar a mensagem "Opção inválida.".
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    float base,altura;
    int op;

    printf("Insira à base do retângulo: \n");
    scanf("%f",&base);
    printf("Insira à altura do retângulo: \n");
    scanf("%f",&altura);
    if(base <=0 || altura <=0){
        printf("Base e altura deve ser números positivos ");
        return 1;
    }
    printf("Qual operação deseja realizar 0 para calcular perimetro 1 calcular a área: \n");
    scanf("%d",&op);

    switch (op)
    {
    case 0:
        printf("Calculado o do perimetro...\n");
        printf("Perimetro do retângulo é %.2f\n", 2*(base + altura));
        break;
    case 1:
        printf("Calculando a área do retângulo...\n");
        printf("A área do retângulo é %.2f\n",base * altura);
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
}