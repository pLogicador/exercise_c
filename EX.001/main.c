
// ALOCAÇÃO DE ARRAYS MULTIDIMENSIONAIS

#include <stdio.h>
#include <stdlib.h>
/*
// solução 1
int main()
{
    int *p;
    int i, j, Nlinhas = 7, Ncolunas = 7;

    p = (int *) malloc(Nlinhas * Ncolunas + sizeof(int));

    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < Ncolunas; j++){
            p[i * Ncolunas + j] = i + j;
        }
    }

    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < Ncolunas; j++){
            printf("%d ", p[i * Ncolunas + j]);
        }
    }

    free(p);

    system("pause");
    return 0;
}
*/
// solução 3 PONTEIRO PARA PONTEIRO PARA array
int main(){
    int *v;
    int **p;
    int i , j, Ncolunas = 3, Nlinhas = 3;

    v = (int *) malloc(Nlinhas * Ncolunas * sizeof(int));
    p = (int **) malloc(Nlinhas * sizeof(int));

    for(i = 0; i < Nlinhas; i++){
        p[i] = v + i * Ncolunas;
        for(j = 0; j < Ncolunas; j++){
            scanf("%d", &p[i][j]);
        }
    }

    for(i = 0; i < Nlinhas; i++){
        for(j = 0; j < Ncolunas; j++){
            printf("%dd ", p[i][j]);
        }
        printf("\n\n");
    }

    free(v);
    free(p);

    system("pause");
    return 0;
}







