/* eia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valores[20], quadrado[20];
    int i = 0;

    for(i; i < 20; i++){
        printf("Determine um valor real: \n");
        scanf("%f",&valores[i]);

        quadrado[i] = valores[i] * valores[i];

        printf("%.2f e o seu quadrado eh: %.2f\n",valores[i], quadrado[i]);
    }

    system("pause");
    return 0;
}
