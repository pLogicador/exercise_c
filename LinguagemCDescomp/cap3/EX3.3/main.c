/* Faça um programa que leia três valores inteiros e mostre sua soma
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara-se o tipo e as variáveis
    int x, y, z, soma;

    //leitura das variáveis x, y, z.
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    //calculo da soma das variáveis x, y, z.
    //mostra na tela a soma.
    soma = x + y + z;
    printf("A soma geral dos valores: %d\n", soma);

    //encerra-se o programa
    system("pause");
    return 0;
}
