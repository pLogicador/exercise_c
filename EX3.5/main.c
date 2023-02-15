/*  Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int idadeAtual, anoAtual, dataNascimento;

    printf("Sua idade: ");
    scanf("%d", &idadeAtual);
    printf("Ano atual:  ");
    scanf("%d", &anoAtual);

    dataNascimento = anoAtual - idadeAtual;
    printf("Voce nasceu no ano: %i\n", dataNascimento);

    system("pause");
    return 0;
}
