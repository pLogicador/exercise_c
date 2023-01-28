/* eia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
A área do círculo é A = π * raio2, sendo π = 3.141592.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaração das variaveis
    const float PI = 3.141592;
    float areaC, raio, valor;

    //leitura do raio
    printf("Raio=  ");
    scanf("%f", &valor);

    //cálculo da área do círculo
    raio = pow(valor,2);
    areaC = PI * raio;
    //mostra na tela o resultado
    printf("Area do circulo eh= %.2f m2 \n", areaC);

    system("pause");
    return 0;
}
