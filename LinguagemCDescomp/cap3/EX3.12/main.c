/* Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é calculado por meio
da seguinte fórmula:
V = π * raio2 * altura, em que π = 3.141592
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração
    const float pi = 3.141592;
    float alturac, valor, raioc, volume;

    //entrada
    printf("****CALCULO DO VOLUME DE UM CILINDRO CIRCULAR****\n");
    printf("\nInsira a Altura: ");
    scanf("%f", &alturac);
    printf("\nInsira o valor do Raio: ");
    scanf("%f", &valor);

    //calculo
    raioc = pow(valor,2);
    volume = pi * raioc  * alturac;
    //saída
    printf("Volume de um cilindro circular eh:  %.2f\n",volume);

    system("pause");
    return 0;
}
