/* Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, soma = 0, matriz_tam[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Determine o valor da matriz [%d][%d]: ",i,j);
            scanf("%d",&matriz_tam[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                soma = soma + matriz_tam[i][j];
            }
        }
    }

    printf("\nResultado da soma da diagonal principal: %d\n", soma);

    system("pause");
    return 0;
}
