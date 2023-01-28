/* faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor final para b: ");
    scanf("%d", &b);

    for (a; a <= b; a++){
        if (a%2 != 0){
            printf("%d \n",a);
        }
    }

    system("pause");
    return 0;
}
