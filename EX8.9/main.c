/* Exercício 9
9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.

*/
#include <stdio.h>
#include <stdlib.h>

struct atleta{
    char nome[30];
    char esporte[20];
    int idade;
    float altura;
};

int main()
{
    struct atleta at[5];
    int i, j, auxiliar = 0, at_maisAlto = 0, at_maisVelho = 0;

    for(i = 0; i < 5; i++){

        printf("Ola, como se chama: ");
        scanf("%s", &at[i].nome);
        printf("Qual eh o seu esporte favorito: ");
        scanf("%s", &at[i].esporte);
        printf("Quantos anos voce tem: ");
        scanf("%d",&at[i].idade);
        printf("Qual o valor de sua altura: ");
        scanf("%f", &at[i].altura);

        printf("\n");
    }

    for(i = 1; i < 5; i++){
        if(at[i].altura > at[at_maisAlto].altura){
            at_maisAlto = i;
        }
        if(at[i].idade > at[at_maisVelho].idade){
            at_maisVelho = i;
        }
    }

    printf("\nO atleta mais alto eh %s. Porem o atleta mais velho eh %s\n\n", at[at_maisAlto].nome, at[at_maisVelho].nome );

    // Comando para ordenação pelas idades
    for(i = 0; i < 5; i++){
        for(at_maisVelho = i; at_maisVelho < 5; at_maisVelho++){
            if(at[i].idade > at[at_maisVelho].idade){
                auxiliar = at[i].idade;
                at[i].idade = at[at_maisVelho].idade;
                at[at_maisVelho].idade = auxiliar;
            }
        }
    }


    printf("\nORDENACAO\n");
    for(i = 0; i < 5; i++){
        printf("%d\n",at[i].idade);
    }



    system("pause");
    return 0;
}
