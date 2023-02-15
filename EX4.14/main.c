/* Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira dois valores: ");
    scanf("%d", &numero);



    if(numero%3 == 0){
        printf("VALOR EH DIVISIVEL POR 3!\n");
    }else if(numero%5 == 0){
        printf("VALOR DIVISIVEL POR 5!\n");
    }
    else{
        printf("VALOR NAO DIVISIVEL POR 3 OU 5\n");
    }


    system("pause");
    return 0;
}
