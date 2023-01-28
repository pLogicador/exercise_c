/*  Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que Δ = b2
 – 4 * a * c e ax2
 + bx + c = 0 representa uma equação do segundo
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
Se • Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
Se • Δ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
Se • Δ > 0, existem duas raízes reais. Imprima as raízes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a, b, c, delta, x1, x2;

    printf("f(x) = ax2 + bx + c \n\n");
    printf("\nDIGITE O VALOR DO COEFICIENTE 'A' : ");
    scanf("%f", &a);
    printf("\nDIGITE O VALOR DO COEFICIENTE 'B' : ");
    scanf("%f", &b);
    printf("\nDIGITE O VALOR DO COEFICIENTE 'C' : ");
    scanf("%f", &c);

    if (a == 0){
        printf("\n\nNao eh equacao de segundo-grau!\n\n");
        return 0;
    }
    //formula
    delta = b*b - 4 * a * c;

    if(delta < 0){
        printf("\nDelta: %f Nao existe raiz\n", delta);
    }
    else
    {
        if(delta == 0){
            x1 = -b / (2*a);
            printf("\nDelta: %f\nx': %f\n !!RAIZ UNICA", delta,x1);
        }
        else{
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("\nDelta: %f\nx' :%f\nx'': %f\n\n",delta, x1,x2);
        }
    }
    system("pause");
    return 0;
}
