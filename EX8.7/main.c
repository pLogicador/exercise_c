/* Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posi��es dessa estrutura e imprima a maior hora.
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

    // Para ir de 0 at� 5 de um em um fa�a
    for(i = 0; i < 5; i++){
    // leia a hora, minuto, e segundo determinada pelo usu�rio
        printf("Determine a hora: ");
        scanf("%d", &g[i].hora);
        printf("Determine os Minutos: ");
        scanf("%d", &g[i].minuto);
        printf("Determine os Segundos: ");
        scanf("%d", &g[i].segundo);
    }
    // Para ir de 1 at� 5 de um em um fa�a
    for(i = 1; i < 5; i++){
        /* Se o �ndice 'hora' for maior que o �ndice '�_maior' de hora '�_maior' recebe o �ndice 'hora'.
        */
        if(g[i].hora > g[i_maior].hora){
            i_maior = i;
        /* Se n�o se o �ndice 'hora' for igual ao �ndice 'i_maior' de hora ent�o se o �ndice 'minuto' for maior que o �ndice 'i_maior' de minuto 'i_maior' recebe o �ndice.
        */
        }else if(g[i].hora == g[i_maior].hora){
            if(g[i].minuto > g[i_maior].minuto){
                i_maior = i;
            /* Se n�o se o �ndice 'minuto' for igual ao �ndice 'i_maior' de minuto ent�o se o �ndice 'segundo' for maior que o �ndice 'i_maior' de segundo ent�o 'i_maior' recebe o �ndice;
            */
            }else if(g[i].minuto == g[i_maior].minuto){
                if(g[i].segundo > g[i_maior].segundo){
                    i_maior = i;
                }
            }
        }
    }
    // Sa�da de dados
    printf("\nO Maior horario encontrado foi: %dh %dm %ds.\n",g[i_maior].hora, g[i_maior].minuto, g[i].segundo);

    system("pause");
    return 0;
}
