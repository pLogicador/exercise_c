/* Faça um programa que informe o mês de acordo com o número digitado pelo susuário. Exemplo: Entrada = 4. Saída = Abril
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valormes;

    printf("ESCOLHA DE 1 A 12 PARA SABER O MES QUE TAIS VALORES REPRESENTAM: ");
    scanf("%d", &valormes);

    switch(valormes){
        case 1:
            printf("\nJANEIRO\n");
            break;
        case 2:
            printf("\nFEVEREIRO\n");
            break;
        case 3:
            printf("\nMARCO\n");
            break;
        case 4:
            printf("\nABRIL\n");
            break;
        case 5:
            printf("\nMAIO\n");
            break;
        case 6:
            printf("\nJUNHO\n");
            break;
        case 7:
            printf("\nJULHO\n");
            break;
        case 8:
            printf("\nAGOSTO\n");
            break;
        case 9:
            printf("\nSETEMBRO\n");
            break;
        case 10:
            printf("\nOUTUBRO\n");
            break;
        case 11:
            printf("\nNOVEMBRO\n");
            break;
        case 12:
            printf("\nDEZEMBRO\n");
            break;
        default: printf("\nVALOR INCORRETO\n");
    }

    system("pause");
    return 0;
}
