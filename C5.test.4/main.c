#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int i,j;
    for (i = 0, j = 100; i < j; i++,  j--){
        printf("i = %d e j = %d \n", i,j);
    }
    system("pause");
    return 0;
}
*/

/*
int main(){
    char c;

    for (c =  'A'; c <= 'Z'; c++){
        printf("Letra = %c\n",c);
    }
    system("pause");
    return 0;
}
*/

/*
// do-while
int main(){
    int i = 0;
    do{
        printf("Valor %d\n", i);
        i++;
    }while(i<10);//Esse ponto e virgula é necessrario!
    system("pause");
    return 0;
}
*/
int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);

    while (a <= b){
        a = a + 1;
        if(a == 5)
            continue;
        printf("%d \n", a);
    }
    system("pause");
    return 0;
}
