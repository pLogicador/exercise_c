/* Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Char com tamanho %d bytes\n", sizeof(char));
    printf("Int com tamanho %d bytes\n", sizeof(int));
    printf("Float com tamanho %d bytes\n", sizeof(float));
    printf("Double com tamanho %d bytes\n", sizeof(double));
    printf("\n\n");

    system("pause");
    return 0;
}
