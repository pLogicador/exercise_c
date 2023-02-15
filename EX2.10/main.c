#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dia;
    int mes;
    int ano;
    printf("Dia: ");
    scanf("%d",&dia);
    printf("Mes: ");
    scanf("%d",&mes);
    printf("Ano: ");
    scanf("%d",&ano);
    printf("Data: %d\\%d\\%d\n", dia,mes,ano);

    system("pause");
    return 0;
}
