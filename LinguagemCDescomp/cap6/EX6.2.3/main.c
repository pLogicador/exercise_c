/* Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida
na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilinha, jcoluna, matriz_tam[5][5];


    for(ilinha = 0; ilinha < 5; ilinha++){
        for(jcoluna = 0; jcoluna < 5; jcoluna++){

            // Para a diagonal principal iniciar com 1
            if(ilinha == jcoluna){
                matriz_tam[ilinha][jcoluna] = 1;
            // Para os demias elementos
            }else{
                matriz_tam[ilinha][jcoluna] = 0;
            }
        }
    }
    // Comando para saída de dados
    for(ilinha = 0; ilinha < 5; ilinha++){
        for(jcoluna = 0; jcoluna < 5; jcoluna++){
            printf("[%d]",matriz_tam[ilinha][jcoluna]);
        }
    }

    printf("\nFim de programa\n");

    system("pause");
    return 0;
}
