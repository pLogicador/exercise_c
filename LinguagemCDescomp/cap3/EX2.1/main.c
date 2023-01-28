/* Elabore um programa que escreva as mensagens "Início do programa" e "Fim" na tela,
uma em cada linha, usando apenas o comando printf()
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("início do programa\nfim", setlocale(LC_ALL,""));
    return 0;
}
