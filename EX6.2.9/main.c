/* Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array. Por exemplo, a matriz
5 −8 10
1 2 15
25 10 7
 deverá gerar o vetor
31 4 32
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, soma[3], matriz_tam[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Determine o valor[%d]x[%d]: ", i,j);
            scanf("%d",&matriz_tam[i][j]);
        }

        soma[i] = 0;
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma[j] = soma[j] + matriz_tam[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        printf("[%d]\n",soma[i]);
    }

    system("pause");
    return 0;
}
