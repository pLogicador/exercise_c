/*  Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, elemento[5], *resultado;

    resultado = elemento;

    printf("\t\tInsira cinco elemento:\n");

    for(i = 0; i < 5; i++){
        printf("Elemento %d: ",(i + 1));
        scanf("%d", &elemento[i]);
    }

    printf("\n\tElementos:\n");
    for(i = 0; i < 5; i++){
        printf("%d ",elemento[i]);
    }

    printf("\n\n");

    // Para o endereço/pares
    printf("\t\t\nENDERECOS DO ARRAY:\n");

    resultado = elemento;

    for(i = 0; i < 5; i++){
        if(elemento[i]%2 == 0){
            printf("\nO valor %d eh par \nE sua posicao = %d\n", elemento[i], resultado);
        }

        resultado++;
    }

    system("pause");
    return 0;
}
