/* a�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma
das op��es, e o seu programa pede dois valores num�ricos e realiza a opera��o,
mostrando o resultado.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char operacao;

    printf("ESCOLHA O SIMBOLO PARA OPERACAO ");
    operacao = getchar();
    printf("INSIRA DOIS VAORES: ");
    scanf("%d %d", &x, &y);

    switch(operacao){
        case '+':{
            int a = x + y;
            printf("SOMA: %d\n",a);}
            break;
        case '*':{
            int b = x * y;
            printf("MULTIPLICACAO: %d\n",b);}
            break;
        case '/':{
            int c = x / y;
            printf("DIVISAO: %d\n",c);}
            break;
        case '%':{
            int d = x % y;
            printf("MODULO/RESTO: %d\n",d);}
            break;
        default: printf("VALOR INCORRETO!\n");
    }
    system("pause");
    return 0;
}
