/* Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie
um terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo
do primeiro seguido do conteúdo do segundo).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomeArquivo1[100], nomeArquivo2[100], caractere;

    FILE* arquivo1;
    FILE* arquivo2;
    FILE* arquivo3;

    scanf("%d[\n]% * c", &nomeArquivo1);
    scanf("%d[\n]", &nomeArquivo2);

    arquivo1 = fopen(nomeArquivo1, "r");
    arquivo3 = fopen("arquivo3.txt", "w");

    while(fscanf(arquivo1, "%c", &caractere) != EOF){
        fprintf(arquivo3, "%c", caractere);
    }

    fclose(arquivo2);
    fclose(arquivo3);

    system("pause");
    return 0;
}
