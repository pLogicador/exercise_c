/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Escreva um programa que mostre o tamanho em byte dessa estrutura.
*/
#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int numeroMatricula;
    char nomeAluno[40];
    float nota[3];
};

int main()
{
    struct aluno a;

    printf("Tamahno da estrutura aluno a: %d\n", sizeof(a));

    system("pause");
    return 0;
}
