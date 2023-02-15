/*  matem�tica, o n�mero harm�nico designado por Hn define-se como o en�simo termo da s�rie harm�nica.
Apresente um programa que calcule o valor de qualquer Hn
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entrada de dados
    int i = 1, numero = 1;
    float soma = 0;

    //Processamento de dados

    printf("*******CALCULO DE VALORES Hn*******");
    while(numero){
        printf("\n\nDigite qualquer numero ou 0 para terminar: ");
        scanf("%d",&numero);
        printf("\nUsuario digitou %d\n",numero);

        soma = 0;

        if(numero){
            for(i; i <= numero;  i++){
                soma += (1.0/i); //1.0 for�ar� um calculo float
            }
            // Sa�da de dados
            printf("\nO resultado da serie eh: %f\n\n",soma);
            printf("\n\n*******FIM DO PROGRAMA*******\n\n");
        }else{
            printf("\n\n*******O USUARIO ENCERROU O PROGRAMA!*******\n\n");
        }
    }

    system("pause");
    return 0;
}
