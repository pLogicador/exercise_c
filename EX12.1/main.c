/* screva um programa que leia do usuário o nome de um arquivo texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    int linha = 0;

    // Para abrir o arquivo

    arquivo = fopen("arquivo.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // Para ler os caracteres até chegar ao fim do arquivo

    while(!feof(arquivo)){
        // lendo caractere por caractere
        if(getc(arquivo) == '\n'){
            linha ++;
        }
    }

    printf("O arquivo possui %d linhas", linha);

    fclose(arquivo);

    system("pause");
    return 0;
}
