/*  Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela
possui.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[20];
    int i, conta = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    for(i = 0; i < strlen(palavra); i++){
        if((palavra[i] == 'a')||(palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o')||(palavra[i] == 'u')){
            conta++;
        }
    }

    printf("Palavra determinada pelo usuario: %s\n ", palavra);
    printf("\nA palavra determinada pelo usuario possui %d vogais.\n", conta);

    system("pause");
    return 0;
}
