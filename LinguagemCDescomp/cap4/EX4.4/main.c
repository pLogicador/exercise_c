/*  Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o:
 � For maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.�
 � Caso contr�rio, imprima: �Empr�stimo concedido.�
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
