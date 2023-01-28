/* Faça um programa que leia um caractere do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[15];
    char y[15];
    char o[15];
    printf("x= ");
    scanf("%s", &x);
    printf("y= ");
    scanf("%s", &y);
    printf("o =");
    scanf("%s", &o);

    printf("x = %s\nE y= %s\nE o = %s", x,y,o);
    return 0;
}
