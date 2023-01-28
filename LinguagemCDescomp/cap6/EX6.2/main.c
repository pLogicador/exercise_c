/*  Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valores[6];

    printf("Inicie com 6 valores inteiros.\n");
    for(i = 0; i < 6; i++){
        printf("DIGITE OS VALORES: ",(i+1));
        scanf("%d",&valores[i]);
    }
    printf("Valores lidos:\n");
    for(i = 5; i >= 0; i--){
        printf("%d\n",valores[i]);
    }

    system("pause");
    return 0;
}
