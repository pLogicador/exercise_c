/* Escreva um programa que leia um n�mero inteiro e mostre a multiplica��o e a divis�o desse n�mero por
dois (utilize os operadores de deslocamento de bits).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Insira um valor: ");
    scanf("%d", &num);

    printf("\nMultiplicado por 2 eh: %d\n", num << 1);
    printf("\nDividido por 2 eh: %d\n\n", num >> 1);

    system("pause");
    return 0;
}
