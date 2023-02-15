/* Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de
uma das seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio e mostrado na tabela a seguir:
N�mero digitado M�dia \\
1 Geom�trica:
x * y * z
2 Ponderada:
3 Harm�nica:
4 Aritm�tica
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    char escolha;

    printf("\nESCOLHA O TIPO DE CACULO COM VALORES DE 1 A 4:\n\t1[GEOMETRICA]\n\t2[PONDERADA]\n\t3[HARMONICA]\n\t4[ARITMETICA] \n");
    escolha = getchar();
    printf("INSIRA TRES NUMEROS INTEIROS: ");
    scanf(" %d %d %d ", &x, &y, &z);

    switch(escolha){
        case '1':{
            int a = x * y * z;
            printf("Media GEOMETRICA: %d\n", a);}
            break;
        case '2':{
            int b = ((x + 2)*(y+3)* z)/6;
            printf("Media PONDERADA: %d\n", b);}
            break;
        case '3':{
            int c = 1 /((1/x)+(1/y)+(1/z));
            printf("Media HARMONICA: %d\n", c);}
        case '4':{
            int d = (x+y+z)/3;
            printf("Media ARITMETICA: %d\n",d);
            break;
        default: printf("Nao eh operacao.\n");}
    }
    system("pause");
    return 0;
}
