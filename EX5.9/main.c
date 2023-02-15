//Como referência:
//https://www.sorocaba.unesp.br/Home/Graduacao/EngenhariaAmbiental/antonio/lista_for.pdf

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, armazena_menor, armazena_maior;
    int i;

    printf("Digite o 1o numero inteiro: ");
    scanf("%i", &numero);

    armazena_menor = numero;
    armazena_maior = numero;

    for (i=1; i < 10; i++){
        printf("Digite o %do numero inteiro: ",i+1);
        scanf("%i", &numero);

        if(numero > armazena_maior){
            armazena_maior = numero;
        }else{
            if(numero < armazena_menor){
                armazena_menor = numero;
            }
        }
    }
    printf("\nO menor numero eh: %d", armazena_menor);
    printf("\nO maior numero eh: %d\n", armazena_maior);

    system("pause");
    return 0;
}
