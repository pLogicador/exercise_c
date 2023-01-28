/* Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c;

    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);

    if (a == 0){
        for (c = a; c >= b; c--){
        printf("%d \n", c);
        }
    }else{
        if (a < b){
            printf("Inicie com um valor positivo maior que o segundo!\n");
        }
    }
    printf("\n\nFim do programa\n");

    system("pause");
    return 0;
}
