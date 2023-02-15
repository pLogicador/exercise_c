/* aça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetor_A[10];
    int vetor_B[10];
    int vetor_C[10];

    for(i = 0; i < 10; i++){
        printf("Determine o %do valor de A inteiro:\n",(i+1));
        scanf("%d",&vetor_A[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Determine o %do valor de B inteiro:\n",(i+1));
        scanf("%d",&vetor_B[i]);
    }
    for(i = 0; i < 10; i++){
        vetor_C[i] = vetor_A[i] - vetor_B[i];
        printf("A subtracao dos vetores A e B sao: %d\n",vetor_C[i]);
    }

    system("pause");
    return 0;
}
