/* Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
e imprima o dia da semana correspondente a esse n�mero. Isto �, domingo, se 1,
segunda-feira, se 2, e assim por diante.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira os valores de 1 a 7 para revelar seu dia-da-sema correspondente: ");
    scanf("%d", &numero);

    switch(numero){
        case 2:{
            printf("Segunda-feira\n");}
            break;
        case 3:{
            printf("Terca-feira\n");}
            break;
        case 4:{
            printf("Quarta-feira\n");}
            break;
        case 5:{
            printf("Quinta-feira\n");}
            break;
        case 6:{
            printf("Sexta-feira\n");}
            break;
        case 7:{
            printf("Sabado\n");}
            break;
        case 1:{
            printf("Domingo\n");}
            break;
        default: printf("VALOR INCORRETO!\n");
    }

    system("pause");
    return 0;
}
