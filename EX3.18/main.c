/* Elabore um programa que leia dois n�meros inteiros e exiba o deslocamento, � esquerda e � direita, do primeiro n�mero pelo segundo.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);

    printf("Insira o segundo valor: ");
    scanf("%d", &num2);

    printf("Primeiro valor deslocado: %d\n", num1 << 2 );
    printf("Segundo valor deslocado: %d\n", num2 >> 2);



    system("pause");
    return 0;
}
