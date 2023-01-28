/*  Elabore um programa no qual o usuário informe o nome de um arquivo texto e
uma palavra, e o programa informe o número de vezes que aquela palavra aparece
dentro do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaAsVezes(char *nomeArquivo, char *string){
    char conteudo[100];
    FILE *arquivo = fopen(nomeArquivo, "r");
    if(arquivo == NULL){
        printf("Erro: impossivel abrir o arquivo %s\n", nomeArquivo);
        exit(-1);
    }

    int cont = 0;
    while(fgets(conteudo, 100, arquivo) != NULL){
        char *tmp = conteudo;
        while ((tmp = strstr(tmp, string)) !NULL){
            cont++;
            tmp++;
        }
    }

    fclose(arquivo);
    return cont;
}

int main()
{
    int Vezes = contaAsVezes(nomeArquivo, string);

    printf("A palavra \%s\" ocorre %d vezes no arquivo %s\n", string, Vezes, nomeArquivo);

    system("pause");
    return 0;
}
