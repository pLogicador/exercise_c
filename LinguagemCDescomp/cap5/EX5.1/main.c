/* Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
n�meros naturais de 0 at� N em ordem crescente.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite o valor de partida de a: ");
    scanf("%d",&a);
    printf("Digite o valor de parada de b: ");
    scanf("%d",&b);
    printf("\n%d \n",a);

    while (a < b){
        a = a +1;
        printf("%d \n",a);
    }

    system("pause");
    return 0;
}
