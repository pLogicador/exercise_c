/* 3)  Escreva uma fun��o que receba por par�metro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A f�rmula de convers�o �: C = (F � 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
#include <stdio.h>
#include <stdlib.h>

float temperatura_f(float f){
    return (f - 32.0) * (5.0/9.0);
}

int main()
{
    float f, c;

    printf("Insira um valor em graus Farheheint: ");
    scanf("%f",&f);

    c = temperatura_f(f);

    printf("O valor %2.f convertido em graus Celusius fica: %f\n\n",f, c);

    system("pause");
    return 0;
}
