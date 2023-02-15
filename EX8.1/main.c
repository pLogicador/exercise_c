/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.
*/
#include <stdio.h>
#include <stdlib.h>


struct pessoa{
    char nome[30];
    int idade;
    char rua[40];
    int numero;
};

 int main()
 {
    struct pessoa p;
    printf("Seu nome: ");
    gets(p.nome);

    printf("Quantos anos voce tem: ");
    scanf("%d",&p.idade);

    printf("Nome da sua rua: ");
    gets(p.rua);

    printf("Numero: ");
    scanf("%d",&p.numero);

    printf("Nome do usuario: %c\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Enderecco do usuario:\nRua %s\n", p.rua);
    printf("Numero %d\n", p.numero);

    system("pause");
    return 0;
}
