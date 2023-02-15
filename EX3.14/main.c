/* Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch = 'M';

    printf("%c em minuscula representa: %c\n", ch, tolower(ch));

    system("pause");
    return 0;
}
