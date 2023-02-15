/* Elabore um programa que leia do usu�rio o tamanho de um vetor a ser lido. Em
seguida, fa�a a aloca��o din�mica desse vetor. Por fim, leia o vetor do usu�rio e o
imprima.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tamanho, valor;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if(vetor == NULL){
        printf("ERRO: Sem memoria\n");
        exit(0);
    }
    printf("Insira os valores do vetor");
    printf("\n\n");

    for(i = 0; i < tamanho; i++){
        printf("Poscao do vetor[%d]: ",i);
        scanf("%d", &vetor[i]);
    }
    printf("\n\nO conteudo do vetor segundo o usuario eh\n");

    for(i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    free(vetor);

    system("pause");
    return 0;
}
