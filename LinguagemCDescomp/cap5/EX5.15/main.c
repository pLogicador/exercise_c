/* labore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite um n�mero negativo. O programa tem de retornar o maior e o menor n�mero
lido.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0, maior = -1, menor = 10000, n;

    do{
        printf("Digite um numero: ");
        scanf("%d",&n);


        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }

        numero = n;
    }while(numero >= 0);

    printf("\n****[maior numero digitado]****\n%d\n\n****[menor numero digitado]***\n%d",maior, menor);

    system("pause");
    return 0;
}
