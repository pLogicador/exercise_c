/* Faça um programa que leia uma string e a imprima na tela
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char escrita[100];
    printf("Escreva algo: ");
    fgets(escrita, 100, stdin);
    printf("Oque o usuario digitou: %s",escrita);

    system("pause");
    return 0;
}
