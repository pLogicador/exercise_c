//um programa na linguagem C, utilizando qualquer compilador, em que pe�a como entrada, seu
//nome, endere�o e telefone, por fim, exiba esses dados na tela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    //declara��o de tipos e vari�veis
    char nome[40], sobrenome[40], ender[60];
    int telefone;

    //fun��o do sistema para pedir, guardar
    printf("Digite seu nome: ", nome);
    gets(nome);
    printf("\nDigite seu sobrenome: ", sobrenome);
    gets(sobrenome);
    printf("\nDigite seu endere�o: ",setlocale(LC_ALL,""),ender);
    gets(ender);
    printf("\nDigite seu n�mero de telefone: ",telefone);
    scanf("%d", &telefone);
    //fun��o do sistema de mostrar os valores guardados
    printf("\n\n******VALORES ARMAZENADOS******\n\n");
    printf("Seu nome: %s %s\n", nome, sobrenome);
    printf("Endere�o:  %s\n",ender);
    printf("Telefone: %d\n",telefone);

    system("pause");
    return 0;
};
