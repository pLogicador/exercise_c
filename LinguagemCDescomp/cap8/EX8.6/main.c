/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.
*/
#include <stdio.h>
#include <stdlib.h>

struct DadosAluno{
    char nome[40];
    int numMatricula;
    float nota1, nota2,nota3;
};

int main()
{
    int i;
    struct DadosAluno aluno;
    float calculo_media = 0, media = 0, MaiorMedia = 0;

    for(i = 0; i < 5; i++){

        printf("Digite seu nome: ");
        gets(aluno.nome);
        printf("%s, digite seu numero de matricula: ",aluno.nome);
        scanf("%d", &aluno.numMatricula);
        printf("%s, digite a primeira nota: ", aluno.nome);
        scanf("%f", &aluno.nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &aluno.nota2);
        printf("%Digite a terceira nota: ");
        scanf("%f", &aluno.nota3);
    }

    if(MaiorMedia > media){
        MaiorMedia == media;
        printf("A maior media de %s eh de %.2f, e sua matricula %d\n", aluno.nome, MaiorMedia, aluno.numMatricula );
    }

    system("pause");
    return 0;
}
