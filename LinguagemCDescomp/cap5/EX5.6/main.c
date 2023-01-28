/* Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    n = 10;

    while(n){
        printf("%d \n",n);
        n = n - 1;
    }

    system("pause");
    return 0;
}
