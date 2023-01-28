/*  Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 • O número digitado ao quadrado.
 • A raiz quadrada do número digitado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, calculo1;
    float calculo2;

    printf("Insira um valor qualquer: ");
    scanf("%d",&x);

    if(x > 0){
        calculo1 = x * x;
        printf("Valor^2: %d\n", calculo1);
    }
    else{
        calculo2 = sqrt(-1*x);
        printf("Valor %f\n", calculo2 );
    }


    system("pause");
    return 0;
}
