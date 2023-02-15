/*  Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valores[6];

    printf("Inicie com 6 valores inteiros.\n");

    for(i = 0; i < 6; i++){
        printf("Digite um valor: ",(i+1));
        scanf("%d",&valores[i]);
    }
    printf("Valores lidos:");
    for(i=0; i<5; i++){
        printf("%d\n",valores[i]);
    }

    system("pause");
    return 0;
}
