/*  importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:

 i. O primeiro ganhador receberá 46% do total.
 ii. O segundo receberá 32% do total.
 iii. O terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int valor = 780.000;
    float g1, g2, g3;

    g1 = (46 * valor) / 100;
    g2 = (32 * valor) / 100;
    g3 = (22 * valor) / 100;

    printf("Ganhador 1 reecebe: %.2f\nGanhador 2 recebe: %.2f\nGanhador 3 recebe: %.2f\n", g1, g2, g3);

    system("pause");
    return 0;
}
