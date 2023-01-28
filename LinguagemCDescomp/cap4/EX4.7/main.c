/* ma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Fa�a um programa
em que o usu�rio entre com o valor e o estado de destino do produto e o programa retorne o pre�o final do produto acrescido do imposto do estado em que
ele ser� vendido. Se o estado digitado n�o for v�lido, mostrar� uma mensagem
de erro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char estadoDestino[2];
    float valor, valorFinal;

    printf("Entre com o valor: ");
    scanf("%f", &valor);

    printf("Qual estado de destino [MG] [SP] [RJ] ou [MS]: ");
    scanf("%s", &estadoDestino);

    if (strcmp(estadoDestino, "mg")== 0 || strcmp(estadoDestino, "MG")==0){
        valorFinal = valor + (valor * 0.07);
        printf("O valor final por MG: %.2f RS \n", valorFinal);
    }else if(strcmp(estadoDestino, "sp")== 0 || strcmp(estadoDestino, "SP")==0){
        valorFinal = valor + (valor * 0.12);
        printf("O valor final por SP: %.2f RS \n", valorFinal);
    }else if(strcmp(estadoDestino, "rj")== 0 || strcmp(estadoDestino, "RJ")== 0){
        valorFinal = valor + (valor * 0.15);
        printf("O valor final por RJ: %.2f RS \n", valorFinal);
    }else if(strcmp(estadoDestino, "ms")== 0 || strcmp(estadoDestino, "MS")==0){
        valorFinal = valor + (valor * 0.08);
        printf("O valor final por MS: %.2f RS \n", valorFinal);
    }else{
        printf("ERROR!\n");
    }

    printf("FIM DO PROGRAMA\n");

    system("pause");
    return 0;
}
