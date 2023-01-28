/*  Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[30];
    int i, tamanho = 0;

    printf("Digite uma palavra: ");
    gets(palavras);

    // compara-se o primeiro com o último, o segundo com o penúltimo caractere e assim por diante
    tamanho = strlen(palavras);
    // Agora precisa-se ir até a metade já que a outra metade já foi comparada junto
    for(i = 0; i < tamanho / 2; i++){
        if(palavras[i] != palavras[tamanho - i - 1]){
            printf("A palavra escolhida pelo usuario nao eh um palindromo.\n");
        }
    }

    printf("A palavra escolhida pelo usuario eh um palindromo.\n");


    system("pause");
    return 0;
}
