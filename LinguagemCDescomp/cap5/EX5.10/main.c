/*  Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, a = 0;
    float m = 0;

    printf("Digite 10 n�meros inteiros positivos: ");

    for (i = 1; i < 10; i++){
        printf("\n%d ",i);
        scanf("%d",&n);

        while(n <= 0){
            printf("Numero ignorado! \n%d\n",i);
            scanf("%d",&n);
        }
        a = a+n;
    }
    m  = a/10;
    printf("Valor medio dos numeros: %f\n",m);

    system("pause");
    return 0;
}
