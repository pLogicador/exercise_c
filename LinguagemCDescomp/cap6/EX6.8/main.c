/* Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma = 0, conta_negativo = 0, positivo,valor[10];

    for(i = 0; i < 10; i++){
        printf("Determine o %do valor, negativo ou positivo: \n",(i+1));
        scanf("%d",&valor[i]);

        if(valor[i] < 0){
            conta_negativo = conta_negativo+1;
        }
        if(valor[i] > 0){
            soma = soma + valor[i];
        }
    }
    printf("\n%d valores negativos\n",conta_negativo);
    printf("\nSoma dos valores positivos: %d\n",soma);

    system("pause");
    return 0;
}
