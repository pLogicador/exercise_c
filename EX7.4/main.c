/*  Fa�a um programa que leia uma string e a imprima de tr�s para a frente
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[20];
    int i, conta;

    printf("Digite algo: ");
    fgets(string, 20, stdin);

    conta = strlen(string); //strlen calcula a quantidade de caracteres que a vari�vel string tem

    printf("Palavra invertida:");

    // i-- pega a vari�vel 'conta' que recebeu a quantidade de caracteres lidos e o decrementa at� o fim(0)
    for(i = conta; i >= 0; i--){
        printf("%c",string[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}
