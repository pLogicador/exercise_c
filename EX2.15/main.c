/* Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida, imprima-as de tr�s maneiras diferentes:
separadas por espa�os, por uma tabula��o horizontal e uma em cada linha. Use um �nico comando printf() para cada
opera��o de escrita das tr�s vari�veis.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[40];
    int idade;
    float cpf;

    printf("SEU NOME: ");
    gets(nome);

    printf("SUA IDADE: ");
    scanf("%d", &idade);
    printf("SEU CPF, separado por pontos: ");
    scanf("%f", &cpf);

    printf("nome: %s\n\tSua idade: %d\n\t\tSeu cpf: %f\n\t",nome,idade,cpf);

    return 0;
}
