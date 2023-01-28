/* Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, vetor_num[8];
    int soma = 0;

    printf("Determine os valores para as 8 posicoes do vetor_num:\n");

    for(int i = 0; i < 8; i++){
        scanf("%d",&vetor_num[i]);
    }

    printf("Valores para a posicao[5] = X e a posicao[8] = Y :\n");

    scanf("%d", &x);
    vetor_num[5] = x;
    scanf("%d", &y);
    vetor_num[8] = y;

    soma = vetor_num[5] + vetor_num[8];

    printf("\nSomatorio: %d\n",soma);

    system("pause");
    return 0;
}
