/* Exercicio 8 e 9 em um
8)Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.

9) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra1[30], palavra2[30];
    int i = 0, j = 0, k = 0, conta = 0, conta_quantidade = 0;

    printf("Determine a primeira palavra: ");
    gets(palavra1);

    printf("Determine a primeira palavra: ");
    gets(palavra2);

    // Comando para  verifica tudo que está na palavra1
    while(i < strlen(palavra1)){
        k = i;
        /* Enquanto todos os elementos for menor que a quantidade de caracteres na palavra2 e se for igual aos
        caracteres da palavras1 haverá uma contagem dos elementos j(de palavras 2) e k(de palavras1)
        */
        while(j < strlen(palavra2)){

            if(palavra2[j] == palavra1[k]){
                conta++;
                j++;
                k++;
            }
        }
        /* Se 'conta' for igual a quantidade de caracteres em palavras2 a var conta_quantidade e as demais contarão os elementos
        */
        if(conta == strlen(palavra2)){
            conta_quantidade++;
            j++;
            i++;
        // Se não zera a contagem dos elementos e repete a verificação
        }else{
            j = 0;
            conta = 0;
            i++;
        }
    }
    if(conta == strlen(palavra2)){
        printf("%s esta contida em %s %d vezes.\n",palavra2, palavra1, conta_quantidade);
    }else{
        printf("%s nao esta contida em %s.\n", palavra2, palavra1);
    }

    system("pause");
    return 0;
}
