/* aça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos
dígitos invertidos do número lido. Exemplo:
 Número lido = 123
 Número gerado = 321
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2, cifra;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i" , &num1);

    if(num1 >= 0){
        do {
            cifra = num1 % 10;
            printf("%i", cifra);
            num1 /= 10;
        }while (num1 != 0);
        printf("\n");
    }
    else if (num1 < 1){
        printf("esse valor e negativo1\n");
    }

    printf("Digite um segundo numero inteiro positivo: ");
    scanf("%i" , &num2);

    //se "num2" foi maior ou igual aa "0" faça
    if(num2 >= 0){
        //controle de fluxo(loop) "do{}while;".
        do {
            cifra = num2 % 10; //"cifra" recebe o resto de "num2 dividido por 10"
            printf("%i", cifra);
            num2 /= 10; //"num2" recebe "num2" dividido por  "10" (num2 = num2 / 10;).

        }while (num2 != 0);
        printf("\n");
    }
    else if (num2 < 1){
        printf("esse valor e negativo1\n");
    }

    system("pause");
    return 0;
}
