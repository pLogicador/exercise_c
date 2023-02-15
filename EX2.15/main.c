/* Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes:
separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada
operação de escrita das três variáveis.
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
