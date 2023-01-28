/* screva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser
convertido e o nome do arquivo a ser salvo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    FILE *pEntrada, *pSaida;

    char nomeEntrada[30], nomeSaida[30];

    int contador, erro = 0;

    printf("Determine o nome do arquivo de entrada: ");
    fflush(stdin, NULL);
    scanf("%29s", nomeEntrada);
    printf("%s\n", nomeEntrada);

    printf("Determine o nome do arquivo de saida: ");
    fflush(stdin, NULL);
    scanf("%29[ \n]", nomeSaida);
    printf("%s\n", nomeSaida);

    pEntrada = fopen(nomeEntrada, "r");

    if(pEntrada == NULL){
        printf("\nImpossivel abrir o arquivo!\n\n");
        erro = 1;
    }

    pSaida = fopen(nomeSaida, "w");

    if(pSaida == NULL){
        printf("Impossivel abrir o arquivo!\n\n");
        erro = 2;
    }

    if(!erro) while((c = fgetc(pEntrada)) !EOF){
        fputc(toupper(contador), pSaida);
    }

    fclose(pEntrada);
    free(pEntrada);

    fclose(pSaida);
    free(pSaida);


    system("pause");
    return 0;

}
