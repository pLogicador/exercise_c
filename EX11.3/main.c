/* Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endere�o de uma pessoa. Agora, escreva uma fun��o que receba um inteiro
Aloca��o din�mica 239
positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite tamb�m que o usu�rio digite os dados desse vetor
dentro da fun��o
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[40];
    int idade;
    char endereco[30];
} cadastro;

// Fun��o para aloca��o din�mica
cadastro *iniciaCadastro(int quantidadeN){
    int i = 0;
    cadastro *cad =(cadastro *)malloc(quantidadeN * sizeof(cadastro));

    if(cad == NULL){
        printf("\nErro: nao eh possivel fazer a alocacao\n");
        exit(1);
    }

    for(i; i < quantidadeN; i++){
        printf("\n***CADASTRO N. %d***",(i + 1));
        printf("\nDigite seu nome: ");
        fflush(stdin);
        gets(cad[i].nome);

        printf("Insire sua idade: ");
        scanf("%d", &cad[i].idade);

        printf("Insira seu endereco: ");
        fflush(stdin);
        gets(cad[i].endereco);
    }

    return cad;

}

int main()
{
    cadastro *cad = NULL;
    int i = 0, quantidadeN;

    printf("\nEscolha a quantidade de cadastros: ");
    scanf("%d", &quantidadeN);

    cad = iniciaCadastro(quantidadeN);

    // Para revelar o cadastro
    printf("\n***Seu(s) Cadastro(s)");

    for(i; i < quantidadeN; i++){
        printf("\n***CADASTRO N.%d***",(i+1));
        printf("Nome: %s", cad[i].nome);
        printf("Idade: %d", cad[i].idade);
        printf("Endereco: %s\n", cad[i].endereco);

    }

    free(cad);

    system("pause");
    return 0;
}
