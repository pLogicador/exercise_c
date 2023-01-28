/*  Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G ∗ π/180, sendo G o ângulo em graus e
R em radianos e π = 3.141592.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float anguloG, converR;

    printf("Um angulo em graus: ");
    scanf("%f", &anguloG);

    converR = anguloG * 3.141592/180;
    printf("Angulo eh convertido em radianos: %f\n", converR);


    system("pause");
    return 0;
}
