/* Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 0, vetor[100];

    for(i = 0; i <= 100; i++){
        while(j%7 == 0 || j%10 == 7){
            j++;
        }
        vetor[i] = j;
        j++;
    }
    for(i = 0; i < 100; i++){
        printf("%d ",vetor[i]);
    }


    system("pause");
    return 0;
}
