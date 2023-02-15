/* ore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles
*/s
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);

    printf("Resultado do primeiro 1vlr^2vlr  OU exclusivo: %d\n", (num1^num2));
    printf("Resultado do primeiro 1vlr|2vlr  OU bit a bit: %d\n", (num1|num2));
    printf("Resultado do primeiro 1vlr&2vlr  E bit a bit: %d\n", (num1&num2));

    system("pause");
    return 0;
}
