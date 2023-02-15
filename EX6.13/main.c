/* Faça um programa para ler 10 números diferentes a serem armazenados em um
vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. Note que cada valor
digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
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
