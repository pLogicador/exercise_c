/* Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[30];
    int i;

    printf("Digite uma palavra: ");
    fgets(string, 39, stdin);

    /* Comando que vai do início do valor lido até '\0'
    */
    for(i = 0; string[i] != '\0'; i++){
        /* para converter as palavras escritas na string em maiúsculas faz-se a
        subtração dessa string com - 32 pela localização do código ASCII
        */
        if(string[i] >= 97 && string[i] <= 122){
            string[i] = string[i] - 32;
        }
    }

    printf("Palavra determinada em maiuscula: %s\n ", string);

    system("pause");
    return 0;
}
