/* Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.
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
