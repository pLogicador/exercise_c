/* Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char string[20];

    printf("Digite um nome: ");
    gets(string);

    for(i = 0; i < 4; i++){
        printf("As quatro primeiras letras formao: %c\n",string[i]);
    }

    system("pause");
    return 0;
}
