/* Fa�a um programa para ler 10 n�meros diferentes a serem armazenados em um
vetor. Os n�meros dever�o ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usu�rio digite um n�mero que j� foi digitado anteriormente, o programa dever� pedir a ele para digitar outro n�mero. Note que cada valor
digitado pelo usu�rio deve ser pesquisado no vetor, verificando se ele existe entre
os n�meros que j� foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k,  vetor[10], auxiliar[10];

    for(i = 0; i < 10; i++){
        printf("%io valor: \n",(i+1));
        scanf("%d", &vetor[i]);
        for(j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                printf("\nNumeros repetidos, forneca outro valor.\n");
                i--;
                continue;
            }
        }
    }
    for(i = 0; i < 10; i++){
        printf("\nValores escolhidos pelo usuario: %d\n", vetor[i]);
    }

    system("pause");
    return 0;
}
