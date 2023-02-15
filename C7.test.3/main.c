/* Para escrever no monitor, basta subistituir FILE *fp por stdout, o qual
    representa o dispositivo de saída-padrão(geralmente a tela do monitor).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[30] = "Hello World\n";
    fputs(texto, stdout);

    system("pause");
    return 0;
}
