/* Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, maior_valor, ilinha, jcoluna, matriz_tam[4][4];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor de %d x %d: ", i,j);
            scanf("%d",&matriz_tam[i][j]);
        }
    }

    maior_valor = matriz_tam[0][0];
    ilinha = 0;
    jcoluna = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz_tam[i][j] > maior_valor){
                maior_valor = matriz_tam[i][j];
                ilinha = i;
                jcoluna = j;
            }
        }
    }

    printf("\n\nO maior valor eh: %d e suas posicoes estao localizadas em %d x %d\n\n",maior_valor, ilinha,jcoluna);

    system("pause");
    return 0;
}
