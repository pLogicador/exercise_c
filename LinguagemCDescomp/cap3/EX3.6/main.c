/* Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float k;
    float m = 1000;
    printf("Insira uma velocidade: ");
    scanf("%f", &k);

    m = k/3.6;
    printf("Velocidade convertida em m/s: %f\n", m);

    system("pause");
    return 0;
}
