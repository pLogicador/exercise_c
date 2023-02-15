/*  Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, conta = 0, matriz_tam[4][4];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Determine os valores para LINHA%d e COLUNA%d: ",i+1 ,j+1);
            scanf("%d",&matriz_tam[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz_tam[i][j] < 0){
                conta++;
            }
        }
    }

    printf("\nQuantidade de valores negativos encontrados: %d\n",conta);

    system("pause");
    return 0;
}
