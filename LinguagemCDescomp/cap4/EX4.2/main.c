/* Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais”.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Primeiro valor: ");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);

    if(x > y){
        printf("O valor maior eh: %d\n", x);
    }
    else{
        if(x = y){
            printf("Eh valores iguais!\n");
        }
    }
    printf("fim do programa!\n");
    system("pause");
    return 0;
}
