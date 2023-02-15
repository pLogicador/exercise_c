/*  Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
 • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
 • Caso contrário, imprima: “Empréstimo concedido.”
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, valorPrest;

    printf("Salario: ");
    scanf("%f", &salario);
    printf("Valor da prestacao: ");
    scanf("%f",&valorPrest);

    if(valorPrest > salario * 0.2){
        printf("Emprestimo nao concedido\n");
    }
    else{
        printf("Emprestimo concedido\n");
    }
    printf("Fim de programa!\n");


    system("pause");
    return 0;
}
