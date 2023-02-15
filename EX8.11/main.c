/* Exercicio descartado
screva um programa que contenha uma estrutura representando uma data válida. Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que decorreram
entre as duas datas.

*/

/*
#include <stdio.h>
#include <stdlib.h>

struct dma{
    int dia;
    int mes;
    int ano;
}x;

struct dma x;
struct dma y;

int main()
{
    int diasEst1, diasEst2;

    x.dia = 12;
    x.mes = 2;
    x.ano = 1;
    y.dia = 20;
    y.mes = 1;
    y.ano = 2;

    diasEst1 = (x.dia) + (30 * x.mes) + (365 * x.ano);
    diasEst2 = (y.dia) + (30 * y.mes) + (365 * y.ano);

    printf("Dias decorridos x: %d\n", diasEst1);
    printf("Dias decorridos y: %d\n", diasEst2);

    printf("Diferenca entre o maior e menor: %d\n", abs(diasEst1 - diasEst2));

    system("pause");
    return 0;
}
