
#include <stdio.h>
#include <stdlib.h>
// ABRIR UM ARQUIVO BINÁRIO PARA ESCRITA
int main()
{
    int wb;

    FILE *fp;
    fp = fopen("exemplo.bin",wb);

    if(fp == NULL){
        printf("ERRO: NAO SE PODE ABRIR O ARQUIVO\n");
    }
    fclose(fp);

    system("pause");
    return 0;
}
