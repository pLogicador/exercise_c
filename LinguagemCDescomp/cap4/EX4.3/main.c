/* Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Insira algum valor: ");
    scanf("%d",&x);

    if(x%2 == 0){
        printf("O valor eh PAR!\n");
    }
    else{
        printf("Esse valor eh IMPAR!\n");
    }

    printf("Fim programa!");

    system("pause");
    return 0;
}
