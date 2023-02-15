/* Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, conver;
    float dolar = 5.44;

    printf("Valor a ser gasto em reais: ");
    scanf("%f", &reais);

    /*printf("Cotacao do dolar: ");
    scanf("%f", &dolar);*/

    conver = reais * dolar;
    printf("O valor a gastar em dolar eh: %f\n", conver);

    system("pause");
    return 0;
}
