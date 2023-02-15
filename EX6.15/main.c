/* leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10];
    int i, j, k;

    for(i = 0; i < 10; i++){
        printf("DETERMINE UM VALOR: ");
        scanf("%f", &vetor[i]);
    }

    // Comando para ordenação dos valores
    for(i = 0; i < 10; i++){
        // j pega o que está proximo de i
        for(j = i + 1; j < 10; j++){
            if(vetor[i] > vetor[j]){
                k = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = k;
            }
        }
    }

    printf("Os valores dados abaixo estao em ordem crescente");

    for(i = 0; i < 10; i++){
        printf("\n%.1f",vetor[i]);
    }
    printf("\nFIM DO PROGRAMA\n");

    system("pause");
    return 0;
}
