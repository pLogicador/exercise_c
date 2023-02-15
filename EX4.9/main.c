/* Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
Altura
Peso
Até 60 Entre 60-90 (inclusive) Acima de 90
Menor do que 1,20 A D G
1,20-1,70 B E H
Maior do que 1,70 C F I
*/
#include <stdio.h>
#include <stdlib.h>
// LINK PARA UM EXEMPLO DE FLUXOGRAMA QUESTÃO(22)
/*  https://docplayer.com.br/70127961-Logica-e-linguagem-de-programacao-aula-03-estruturas-de-controle-estrutura-condicional-lista-de-exercicios-respostas-professor-danilo-giacobo.html
*/
int main(){

    float altura;
    int peso;

    printf("Sua altura: ");
    scanf("%f", &altura);
    printf("Seu peso: ");
    scanf("%d", &peso);

    if(altura < 1.20){
       if(peso <= 60 ){
            printf("GRUPO [A]\n");
       }else if(peso >= 60 && peso <= 90){
           printf("GRUPO[D]\n");
       }else{
           printf("GRUPO[G]\n");
       }
    }else if(altura >= 1.20 && altura <= 1.70){
        if(peso <= 60){
            printf("GRUPO [B]\n");
        }else if(peso >= 60 && peso <= 90){
            printf("GRUPO [E]\n");
        }else{
            printf("GRUPO [H]");
        }
    }else if(peso <= 60){
        printf("GRUPO [C] \n");
    }else if(peso > 60 && peso <= 90){
        printf("GRUPO[F]\n");
    }else{
        printf("GRUPO [I]\n");
    }


    system("pause");
    return 0;
}
