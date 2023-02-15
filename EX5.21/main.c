/* Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entrada de dados
    int numero, i, maior_valor, quantidade_numeros, limite;

    printf("Defina um limite para a leitura dos valores: ");
    scanf("%i", &limite);
    printf("Digite um numero: ");
    scanf("%i",&numero);

    // Processamento de dados
    maior_valor = numero;
    quantidade_numeros = 1;

    for(i=1; i < limite; i++){
        printf("Digite um numero: ");
        scanf("%i",&numero);

        if(numero > maior_valor){
            maior_valor = numero;
        }
        if(maior_valor == numero){
            quantidade_numeros = quantidade_numeros+1;
        }
    }
    // Saída de dados
    printf("O numero maior eh %i, quantas vezes lido %i\n",maior_valor, quantidade_numeros);

    system("pause");
    return 0;
}
