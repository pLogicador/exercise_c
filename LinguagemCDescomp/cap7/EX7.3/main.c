/* Sem usar a função strlen(), faça um programa que leia uma string e imprima
quantos caracteres ela possui.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, conta = 0;
    char string[30];

    printf("Digite alguma palavra: ");
    gets(string);

    for(i = 0; string[i] != '\0'; i++){
        conta++;
    }

    printf("Total de palavras lidas: %d\n", conta);

    system("pause");
    return 0;
}
