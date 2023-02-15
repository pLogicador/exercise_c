/* rie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas_ponto{
    int x;
    int y;
} cp;

int main()
{
    float calcula_distancia;

    printf("\nCoordenada para o ponto x: ");
    scanf("%d", &cp.x);

    printf("\nCoordenada para o ponto y: ");
    scanf("%d", &cp.y);

    //Cálculo da distância escolhida(x,y) até a origem(posição: 0,0)
    calcula_distancia = sqrt(pow((cp.x - 0), 2) + pow((cp.y - 0), 2));

    printf("Distancia entre o ponto determinado pelo usuario e a origem(0,0): %.2f\n", calcula_distancia);

    system("pause");
    return 0;
}
