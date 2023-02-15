/* Escreva uma fun��o que receba um n�mero inteiro positivo n. Calcule e retorne
o somat�rio de 1 at� n: 1 + 2 + 3 + ... + n.
*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else
        return n * fatorial(n-1);
}

int main(){

    int valor;

    printf("Insira um valor qualquer: ");
    scanf("%d", &valor);

    printf("\nO fatorial do valor %d eh: %d\n",valor, fatorial(valor));

    system("pause");
    return 0;
}
