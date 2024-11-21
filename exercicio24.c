/*Fa�a um programa que receba tr�s notas de
um aluno, calcule e mostre a m�dia aritm�tica e a mensagem que segue a tabela abaixo.
Para alunos de exame, calcule e mostre a nota que dever� ser tirada no exame para
aprova��o, considerando que a m�dia no exame � 6,0.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3;
    float mediaNotas,notaExam,exam=6.0;

    printf("Insira a primeira nota: \n");
    scanf("%f",&n1);
    printf("Insira a segunda nota: \n");
    scanf("%f",&n2);
    printf("Insira a terceira nota: \n");
    scanf("%f",&n3);
    // verifica��o das notas, verifcar se esta entre 0-10
    if((n1 < 0 || n1 >10) || (n2 <0 || n2 >10) || (n3 <0 || n3 >10)){
        printf("Notas inv�lidas detectadas! Certifique-se de que todas as notas est�o entre 0 e 10.\n");
        return 1;
    }    
    mediaNotas = (n1 + n2 + n3) /3;
    
    if(mediaNotas >=7){
        printf("Sua m�dia foi %.2f. Voc� foi aprovado. \n",mediaNotas);
    }else if(mediaNotas <3){
        printf("Sua m�dia foi %.2f. Voc� foi reprovado.\n",mediaNotas);
    }else{
        notaExam = 2* exam - mediaNotas;
        printf("Sua m�dia foi %.2f. Voc� precisa realizar o exame e tirar pelo menos %.2f para ser aprovado.\n", mediaNotas, notaExam);
    }
    
    return 0;
}