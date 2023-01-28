/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
 • Homens: (72,7 * h) – 58
 • Mulheres: (62,1 * h) – 44,7
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    char ch;

    printf("****PARA SABER O PESO IDEAL****\n\n");

    printf("INSIRA A SUA ALTURA: ");
    scanf("%f", &h);
    printf("\nDIGITE SEU SEXO CORRESPONDENTE [H] ou [M]: ");
    scanf("%c", &ch);
    ch = getchar();

    if(ch == 'H')
        printf("Peso ideal: %f\n", (72.7 * h)-58);
    else
        if(ch == 'M')
            printf("Peso ideal: %f\n", (62.1 * h)-44.7);
    else
        printf("Inválido!\n");

    system("pause");
    return 0;
}
