#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Digite seu primeiro valor: "); scanf("%f",&x); printf("Digite seu segundo valor: "); scanf("%f",&y);
    printf("Seus valores em ordem invertida: %2f %2f\n", y,x);
    return 0;
}
