/* Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
iguais e os escreva na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0, auxiliar, vetor[10];

    for(i = 0; i < 10; i++){
        printf("DETERMINE[%i]: \n",(i+1));
        scanf("%d", &vetor[i]);
    }

    printf("\nVALORES REPETIDOS: \n");

    for(i = 0; i <= 10; i++){
        for(j = i + 1; j < 10; j++){
            if(vetor[j] == vetor[i]){
                auxiliar = vetor[i];
                printf("%d\n",auxiliar);
            }
        }
    }

    system("pause");
    return 0;
}
