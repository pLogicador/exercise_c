/* Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, md;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Terceira nota: ");
    scanf("%f", &n3);
    printf("Quarta nota: ");
    scanf("%f", &n4);

    md = (n1 + n2 + n3 + n4) / 4;
    printf("Media das 4 notas: %f\n",md);


    system("pause");
    return 0;
}
