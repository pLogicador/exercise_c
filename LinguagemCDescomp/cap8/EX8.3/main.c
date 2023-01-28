/* rie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calcula_distancia;

    struct coordenadas_ponto{
        int x;
        int y;
    } p1, p2;

    printf("Determine o valor do ponto x: ");
    scanf("%d", &p1.x);
    printf("Determine o valor do ponto y: ");
    scanf("%d", &p1.y);

    calcula_distancia = sqrt(pow((p2.x - p1.x), 2)+ pow((p2.y - p1.y),2));

    printf("Distancia entre os pontos x & y: %.2f\n", calcula_distancia);

    system("pause");
    return 0;
}
