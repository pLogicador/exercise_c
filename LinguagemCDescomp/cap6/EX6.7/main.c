/*   um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior_valor = 0, menor_valor;
    int i, vetor_x[10];

    menor_valor = vetor_x[i];

    for(i = 0; i < 10; i++){
        printf("Determine o %do valor: \n",(i+1));
        scanf("%d",&vetor_x[i]);

        if(vetor_x[i] < menor_valor){
            menor_valor = vetor_x[i];
        }

        if(vetor_x[i] > maior_valor){
                maior_valor = vetor_x[i];
        }
    }

    printf("Maior valor: %d\n",maior_valor);
    printf("Menor valor: %d\n",menor_valor);

    system("pause");
    return 0;
}
