/* Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor[10];
    int conta_pares = 0;

    printf("Para um vetor de 10 posicoes\n");
    for(i = 0; i < 10; i++){
        printf("\nDetermine o valor da %do posicao\n",(i+1));
        scanf("%d",&valor[i]);

        //Comando para contar quantos valores pares existem
        if(valor[i]%2 == 0){
            conta_pares = conta_pares+1;
        }
    }
    printf("Existem %d numeros pares.\n", conta_pares);

    system("pause");
    return 0;
}
