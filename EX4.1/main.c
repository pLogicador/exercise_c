/*  Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);

    //condi��es
    if( x > y){
        printf("Valor maior: %d\n",x);
    }
    else{
        printf("O valor eh menor!\n");
    }

    system("pause");
    return 0;
}
