/* screva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio. Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a
no termo de ordem zero, e, a partir do segundo termo, seu valor � dado pela soma
dos dois termos anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34.
*/
#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int p; //posi��o at� a qual ser� lida
    int sequencia = 1, sequenciaAtual = 0, sequenciaTroca;

    printf("Escolha o termo de sequencia de Finonacci desejado: ");
    scanf("%d", &p);

    printf("\n0");
    p--;

    while(p){
        printf("%d", sequencia);
        sequenciaTroca = sequencia;
        sequencia += sequenciaAtual;
        sequenciaAtual = sequenciaTroca;
        p--;
    }

    printf("\n\n");

    system("pause");
    return 0;
}
*/

//OR

int main(){

    int a = 0, b = 1, c = 0;
    int n;
    int contador = 2;

    do{
        printf("Qual numero deseja calcular: ");
        scanf("%d",&n);
    }while(n < 1);

    if(n == 1){
        printf("0\n");
    }
    else{
        if(n == 2){
            printf("1\n");
        }
        else{
            while(contador < n){
                c = a + b;
                a = b;
                b = c;
                contador++;
                printf("%d, ",c);
            }
            printf("\nO %do termo eh: %d\n",n,c);
        }
    }

    system("pause");
    return 0;
}










