/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, soma_diagona = 0, soma_resto = 0,  matriz_tam[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j ++){
            printf("Determine o valor da linha[%d] e coluna[%d]: ",i+1,j+1);
            scanf("%d",&matriz_tam[i][j]);

            if((i == j)||(i+j == 5-1)){
                soma_diagona += matriz_tam[i][j];
            }else{
                soma_resto += matriz_tam[i][j];
            }
        }
        printf("\n");
    }

    printf("Soma das diagonais: %d\n",soma_diagona);
    printf("Soma dos restos: %d\n",soma_resto);
    printf("Diferenca: %d\n",soma_diagona - soma_resto);

    system("pause");
    return 0;
}
