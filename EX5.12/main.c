/* Escreva um programa que leia um n�mero inteiro e calcule a soma de todos os
divisores desse n�mero, com exce��o dele pr�prio. Exemplo: a soma dos divisores
do n�mero 66 � 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // inicia-se de 1 pois todo n�mero � divis�vel por 1
    soma = 1;
    for(i = 2; i <= (numero/2.0+1); i++){
        if(numero%i == 0){
            printf("%d + ",i);
            soma += i;
        }
    }
    printf("Soma dos divisores de %d(exceto ele mesmo) eh %d\n",numero,soma);

    system("pause");
    return 0;
}
