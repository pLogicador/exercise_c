/* 9) Elabore uma função que receba três notas de um aluno como parâmetros e uma
letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do
aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int numeroMatricula;
    float nota_prova[3];
} aluno;


int maiorMediaGeral(aluno turma[]){
    float media, mediaMaior = 0;
    int i, I, j; // I de índice


    for(i = 0; i < 3; i++){

        media = 0;

        for(j = 0; j < 3; j++){
            media += turma[i].nota_prova[j];
        }

        media /= 3;

        if(media > mediaMaior){
            mediaMaior = media;
            I = i;
        }
    }

    return I;
}

int main()
{
    aluno turma[3];
    int i, j;

    for(i = 0; i < 3; i++){
        printf("\n***PARA O ALUNO%d***",(i + 1));

        printf("\nInsira o numero da Matricula: ");
        scanf("%d", &turma[i].numeroMatricula);

        printf("\n Insira o nome do aluno: ");
        fflush(stdin);
        gets(turma[i].nome);

        for(j = 0; j < 3; j++){
            printf("Insira a nota da Prova%d: ",(j + 1));
            scanf("%f", &turma[i].nota_prova[j]);
        }

    }

    i = maiorMediaGeral(turma);

    printf("\nO aluno que possui a maior media em geral eh: %s\n", turma[i].nome);

    system("pause");
    return 0;
}
