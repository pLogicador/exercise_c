//um programa na linguagem C, utilizando qualquer compilador, em que peça como entrada, seu
//nome, endereço e telefone, por fim, exiba esses dados na tela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    //declaração de tipos e variáveis
    char nome[40], sobrenome[40], ender[60];
    int telefone;

    //função do sistema para pedir, guardar
    printf("Digite seu nome: ", nome);
    gets(nome);
    printf("\nDigite seu sobrenome: ", sobrenome);
    gets(sobrenome);
    printf("\nDigite seu endereço: ",setlocale(LC_ALL,""),ender);
    gets(ender);
    printf("\nDigite seu número de telefone: ",telefone);
    scanf("%d", &telefone);
    //função do sistema de mostrar os valores guardados
    printf("\n\n******VALORES ARMAZENADOS******\n\n");
    printf("Seu nome: %s %s\n", nome, sobrenome);
    printf("Endereço:  %s\n",ender);
    printf("Telefone: %d\n",telefone);

    system("pause");
    return 0;
};
