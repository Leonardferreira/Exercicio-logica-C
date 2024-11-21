/*(Adaptado de ASCENCIO e CAMPOS, 2008) A nota final de um estudante é calculada a
partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma
avaliação semestral e a um exame final. A média das três notas mencionadas
anteriormente obedece aos pesos a seguir:*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,mediaPond,somaPeso;
    int pesoTrabalho=2,pesoAva=3,pesoExam=4;

    printf("Insira a nota do trabalho: \n");
    scanf("%f",&n1);
    printf("Insira a nota da Avaliação: \n");
    scanf("%f",&n2);
    printf("Insira a nota do exame final: \n");
    scanf("%f",&n3);

    //Validação de entrada da nota (0 -10)  
    if ((n1 <0 || n1 >10) || (n2 <0 || n2 >10) || (n3 <0 || n3 >10)){
        printf("Notas inválidas! Por favor, insira valores entre 0 e 10.\n");
        return 1; // Termina o programa em caso de erro
    }    
    //Cálcular a média ponderada
    somaPeso = pesoTrabalho + pesoAva + pesoExam;
    mediaPond =  (n1 *pesoTrabalho + n2 * pesoAva + n3 * pesoExam) /somaPeso;
    
    printf("Sua média ponderada é %.2f\n",mediaPond);
    if (mediaPond >=8.0 ){
        printf("Conceito A\n");
    }else if (mediaPond >=7.0){
        printf("Conceito B\n");
    }else if(mediaPond >=6 ){
        printf("Conceito C \n");
    }else if(mediaPond >=5 ){
        printf("Conceito D \n");
    }else{
        printf("Conceito E \n");
    }
    printf("\nFIM DO PROGRAMA\n");
    return 0;
}