/* Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, complemento;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("Complemento do valor bit a bit eh: %d\n", (~num)+1 );

    system("pause");
    return 0;
}
