/* Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float media, valores[5];
    float soma = 0;
    int i;

    printf("Inicie com as notas.\n");
    for(i = 0; i < 5; i++){
        printf("medias: ",(i+1));
        scanf("%f",&valores[i]);
    }
    for(i = 0; i < 5; i++){
        soma = soma + valores[i];
    }

    printf("Valores lidos:\n");
    for(i = 0; i < 5; i++){
        printf("%f\n",valores[i]);
    }

    media  = soma / 5.0;

    printf("Media geral: %f\n", media);

    system("pause");
    return 0;
}
