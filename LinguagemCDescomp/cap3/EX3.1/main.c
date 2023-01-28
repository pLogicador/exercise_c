/* Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, ant, suc;
    printf("Digite um valor: ");
    scanf("%d",&x);
    ant = x - 1;
    suc = x + 1;
    printf("Antecessor: %d\nSucessor: %d\n",ant,suc);

    system("pause");
    return 0;
}
