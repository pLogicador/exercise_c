/* Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.
*/
#include <stdio.h>
#include <stdlib.h>

struct hora{
    int hora;
    int minuto;
    int segundo
};

int main()
{
    int i, i_maior = 0;
    struct hora g[5]; // resumindo a estrutura de 'hora' para g(guardar)

    // Para ir de 0 até 5 de um em um faça
    for(i = 0; i < 5; i++){
    // leia a hora, minuto, e segundo determinada pelo usuário
        printf("Determine a hora: ");
        scanf("%d", &g[i].hora);
        printf("Determine os Minutos: ");
        scanf("%d", &g[i].minuto);
        printf("Determine os Segundos: ");
        scanf("%d", &g[i].segundo);
    }
    // Para ir de 1 até 5 de um em um faça
    for(i = 1; i < 5; i++){
        /* Se o índice 'hora' for maior que o índice 'í_maior' de hora 'í_maior' recebe o índice 'hora'.
        */
        if(g[i].hora > g[i_maior].hora){
            i_maior = i;
        /* Se não se o índice 'hora' for igual ao índice 'i_maior' de hora então se o índice 'minuto' for maior que o índice 'i_maior' de minuto 'i_maior' recebe o índice.
        */
        }else if(g[i].hora == g[i_maior].hora){
            if(g[i].minuto > g[i_maior].minuto){
                i_maior = i;
            /* Se não se o índice 'minuto' for igual ao índice 'i_maior' de minuto então se o índice 'segundo' for maior que o índice 'i_maior' de segundo então 'i_maior' recebe o índice;
            */
            }else if(g[i].minuto == g[i_maior].minuto){
                if(g[i].segundo > g[i_maior].segundo){
                    i_maior = i;
                }
            }
        }
    }
    // Saída de dados
    printf("\nO Maior horario encontrado foi: %dh %dm %ds.\n",g[i_maior].hora, g[i_maior].minuto, g[i].segundo);

    system("pause");
    return 0;
}
