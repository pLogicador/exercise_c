/* ça um programa que calcule o desvio-padrão d de um vetor V contendo n números
 em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m = 0, p = 0, media = 0, sigma = 0;
    int i, v[10];

    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 10; i++){
        m = m + v[i];
    }

    media = m / 10;

    for(i = 0; i < 10; i++){
        p = p + pow((v[i] - media), 2);
    }
    sigma = sqrt(p / (10 - 1));
    printf("Resultado do desvio-padrao d = %.2f\n",sigma);

    system("pause");
    return 0;
}
