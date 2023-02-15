/* screva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21v
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entrada de dados
    int valor_n, j, i, m = 1, acrescenta = 1;

    printf("****TRIANGULO DE FLOYD****");
    printf("\n\nDigite um valor n: ");
    scanf("%d", &valor_n);

    // Processamento
    for(i = 0; i <= valor_n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", acrescenta);
            acrescenta++;
        }
        m++;
        // Saída de dados
        printf("\n");
    }
    system("pause");
    return 0;
}
