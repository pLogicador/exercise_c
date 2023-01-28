/* Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
nota foi na prova 3.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,prova1, prova2, prova3, menor_nota, notas[10][3];

    for(j = 0; j < 3; j++){
        printf("\nNotas para a prova%d\n", j+1);
        for(i = 0; i < 10; i++){
            printf("Determine a nota do %do aluno: ", i+1);
            scanf("%d",&notas[i][j]);
        }
        printf("\n");
    }

    prova1 = prova2 = prova3 = 0;

    for(i = 0; i < 3; i++){
        printf("Para a prova%d: \n",i+1);
        menor_nota = 10;
        for(j = 0; j < 3; j++){
            if(notas[i][j] < menor_nota || notas[i][j] < 6){
                menor_nota = notas[i][j];
            }
            //imprime as notas
            printf("Nota do aluno%d foi: %d\n",j+1,notas[i][j]);
        }
        //imprime a menor nota
        printf("A Menor nota deste aluno foi: %d\n", menor_nota);


        for(j = 0; j < 3; j++){
            if(menor_nota == notas[i][j] && j == 0){
                prova1++;
                break;
            }else if(menor_nota == notas[i][j] && j == 1){
                prova2++;
                break;
            }else if(menor_nota == notas[i][j] && j == 2){
                prova3++;
                break;
            }
        }
    }

    printf("\n\n\nQuantidade de alunos que tiveram a menor notas na prova 1: %d", prova1);
    printf("\n\n\nQuantidade de alunos que tiveram a menor notas na prova 2: %d", prova2);
    printf("\n\n\nQuantidade de alunos que tiveram a menor notas na prova 3: %d", prova3);

    system("pause");
    return 0;
}
