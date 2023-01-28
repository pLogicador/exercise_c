/* Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, conta = 0, matriz_tam[4][4];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%do LINHA, %do COLUNA: ",i+1, j+1);
            scanf("%d", &matriz_tam[i][j]);
        }
    }
    // Para registrar em 'conta' os valores maiores que 10
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz_tam[i][j] > 10){
                conta++;
            }
        }
    }
    // Saída de dados
    printf("\nQuantidade de valores maiores que 10 eh: %d\n",conta);

    system("pause");
    return 0;
}
