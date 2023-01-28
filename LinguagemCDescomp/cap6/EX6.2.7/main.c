/* Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal secundária


  a. Soma dos elementos da diagonal principal;
    b. Soma dos elementos da diagonal secundária;
    c. Soma dos elementos acima da diagonal principal;
    d. Soma dos elementos abaixo da diagonal principal;
    e. Soma dos elementos acima da diagonal secundária;
    f. Soma dos elementos abaixo da diagonal secundária;

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, matriz_tam[3][3], asoma = 0, bsoma = 0, csoma = 0, dsoma = 0, esoma = 0, fsoma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Determine o valor para [%d][%d]: ", i,j);
            scanf("%d",&matriz_tam[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            // Soma dos elementos da diagonal principal
            if(i == j){
                asoma =  asoma + matriz_tam[i][j];
            }
            // Soma dos elementos da diagonal secundária
            if(j == 3 - i - 1){
                bsoma = bsoma + matriz_tam[i][j];
            }
            // Soma dos elementos acima da diagonal principal
            if(j > i){
                csoma = csoma + matriz_tam[i][j];
            }
            // Soma dos elementos abaixo da diagonal principal
            if(j < i){
                dsoma = dsoma + matriz_tam[i][j];
            }
            // Soma dos elementos acima da diagonal secundária
            if(j <= 3 - i - 2){
                esoma = esoma + matriz_tam[i][j];
            }
            // Soma dos elementos abaixo da diagonal secundária
            if(j >= 3 - i){
                fsoma = fsoma + matriz_tam[i][j];
            }
        }
    }

    // Comando para mostrar os valores eescolhidos em cada matriz
    for(i = 0; i < 3; i++){
            printf("Da matriz[%i]:", i);
        for(j = 0; j < 3; j++){
            printf(" %i",matriz_tam[i][j]);

        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("Soma dos elementos da diagonal principal: %i\n", asoma);
    printf("Soma dos elementos da diagonal secundária: %i\n", bsoma);
    printf("Soma dos elementos da acima da diagonal principal: %i\n", csoma);
    printf("Soma dos elementos da abaixo da diagonal principal: %i\n", dsoma);
    printf("Soma dos elementos da acima da diagonal secundaria: %i\n", esoma);
    printf("Soma dos elementos da abaixo da diagonal secundaria: %i\n", fsoma);

    system("pause");
    return 0;
}
