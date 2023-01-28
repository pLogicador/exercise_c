/*  Faça um programa que leia dois números e mostre qual deles é o maior.
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

    //condições
    if( x > y){
        printf("Valor maior: %d\n",x);
    }
    else{
        printf("O valor eh menor!\n");
    }

    system("pause");
    return 0;
}
