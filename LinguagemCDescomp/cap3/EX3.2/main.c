/* Fa�a um programa que leia um n�mero real e imprima a quinta parte desse n�mero
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, quint;
    printf("Digite um valor: ");
    scanf("%f", &num);
    quint = num * 1/5;
    printf("Sua quinta parte eh: %f\n", quint);

    system("pause");
    return 0;
}
