/*  Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, menor_valor, matriz_tam[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor do elemento %d x %d: ", i,j);
            scanf("%d", &matriz_tam[i][j]);

        }
    }

    menor_valor = matriz_tam[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz_tam[i][j] < menor_valor){
                menor_valor = matriz_tam[i][j];
            }
        }

        printf("\n");
    }

    printf("\nO menor valor eh: %d\n",menor_valor);

    system("pause");
    return 0;
}
