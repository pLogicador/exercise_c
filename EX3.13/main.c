/* Sejam a e b os catetos de um tri�ngulo cuja hipotenusa h � obtida pela equa��o:
h =
 Fa�a um programa que leia os valores de a e b, e calcule o valor da hipotenusa atrav�s da f�rmula dada. Imprima o resultado
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float valorA, valorB, catA, catB, hipo;

    printf("Valor do cateto A: ");
    scanf("%f", &valorA);
    printf("Valor do cateto B: ");
    scanf("%f", &valorB);

    catA= pow(valorA, 2);
    catB = pow(valorB, 2);
    hipo = sqrt(catA + catB);

    printf("O valor da hipotenusa eh: %.2f\n", hipo);

    system("pause");
    return 0;
}
