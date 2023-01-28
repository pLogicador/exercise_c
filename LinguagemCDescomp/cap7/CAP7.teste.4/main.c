#include <stdio.h>
#include <stdlib.h>

// função strcat()
/*
int main()
{
    char str1[15] = "bom ";
    char str2[15] = "dia\n";

    strcat(str1, str2);
    printf("%s", str1);


    system("pause");
    return 0;
}
*/
int main(){

    char str1[100], str2[100];

    printf("Entre com uma string: ");
    gets(str1);
    printf("Entre com outra string: ");
    gets(str2);

    if(strcmp(str1, str2) == 0){
        printf("Strings iguais\n");
    }else{
        printf("Strings diferentes\n");
    }

    system("pause");
    return 0;
}
