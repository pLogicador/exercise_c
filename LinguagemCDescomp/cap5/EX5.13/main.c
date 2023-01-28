/* Faça um programa que exiba a soma de todos os números naturais abaixo de
1.000 que são múltiplos de 3 ou 5.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplosDe3, multiplosDe5 = 0;
    int resultado;

    for(int i = 0; i <= 1000; i++){
        if(i%3 == 0){
          multiplosDe3 += i;
        }
        if(i%5 == 0){
            multiplosDe5 += i;
        }
    }
    resultado = multiplosDe3 + multiplosDe5;

    printf("A soma de todos numeros naturais abaixo de 1.000 sao: %d",resultado);


    return 0;
}
