/* Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A2
.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, A[5][5], B[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Matriz_A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            B[i][j] = 2 * A[i][j];

            printf("%d\t", B[i][j]);

            if(j == 4){
                    printf("\n");
            }
        }
    }

    system("pause");
    return 0;
}
