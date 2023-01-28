#include <stdio.h>
#include <stdlib.h>
/*
struct ponto{
    int x, y;
} ;

int main()
{
    printf("Tamanho char: %d\n",sizeof(char));
    printf("Tamanho int: %d\n",sizeof(int));
    printf("Tamanho float: %d\n",sizeof(float));
    printf("Tamanho double: %d\n",sizeof(double));
    printf("Tamanho struct ponto: %d\n",sizeof(struct ponto));

    printf("\n\n");

    int x;
    double y;

    printf("Tamanho da vaiavel x: %d\n",sizeof x);
    printf("Tamanho da vaiavel y: %d\n",sizeof y);

    system("pause");
    return 0;
}
*/
/*
// MALLOC

int main(){
    int *p, i;

    p = (int *) malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d: ", i );
        scanf("%d", &p[i]);
    }

    system("pause");
    return 0;
}
*/
/*
// Diferença entre as funções: MALLOC E CALLOC
int main(){
    int i;
    int *p, *p1;

    p = (int *) malloc(5 * sizeof(int));
    p1 = (int *) calloc(5, sizeof(int));

    printf("CALLOC \t\t\t MALLOC\n");

    for(i = 0; i < 5; i++){
        printf("p1[%d] = %d \t\t p[%d] = %d\n", i, p1[i], i, p[i]);
    }

    system("pause");
    return 0;

}
*/
/*
// REALLOC
int main(){
    int i;
    int *p = malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++){
        printf("%d\n", p[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", p[i]);
    }

    printf("\n\n");

    // Diminui o tamanho do array

    p = realloc(p, 3 * sizeof(int));

    for(i = 0; i < 3; i++){
        printf("%d\n", p[i]);
    }

    printf("\n\n");

    // Aumenta o tamanho do array

    p = realloc(p, 10 * sizeof(int));

    for(i = 0; i < 10; i++){
        printf("%d\n", p[i]);
    }

    system("pause");
    return 0;
}
*/
/*
// Continuando
int main(){
    int *p, i;

    p = (int *) malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++){
        p[i] = i + 1;
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", p[i]);
    }

    // libera a memória alocada

    p = (int *) realloc(p, 0);

    system("pause");
    return 0;
}
*/

// FREE
int main(){
    int *p, i;

    p = (int *) malloc(50 * sizeof(int));

    if(p == NULL){
        printf("ERRO: MEMORIA INSUFICIENTE!!\n");
        system("pause");
        exit(1);
    }

    for (i = 0; i < 50; i++){
        p[i] = i + 1;
    }

    // libera a memória alocada

    free(p);
    // tenta imprimir o array cujaa memória foi desalocada/liberada

    for(i = 0; i < 50; i++){
        printf("%d\n", p[i]);
    }

    system("pause");
    return 0;
}
