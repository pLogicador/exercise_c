/* Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:
Categoria Idade
Infantil A 5-7
Infantil B 8-10
Juvenil A 11-13
Juvenil B 14-17
Sênior maiores de 18 anos
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade <= 7){
        printf("Sua classificacao eh INFANTIL(A)!\n");
    }else if(idade >= 8 && idade <= 10){
        printf("Sua classificacao eh INFANTIL(B)!\n");
    }else if(idade >= 11 && idade <= 13){
        printf("Sua classificacao eh JUVENIL(A)!\n");
    }else if(idade >= 14 && idade <= 17){
        printf("Sua classificacao eh JUVENIL(B)!\n");
    }else if(idade >= 18){
        printf("Sua classsificacao eh SENIOR !\n");
    }

    system("pause");
    return 0;
}
