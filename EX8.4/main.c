/* Resolução do exercício 4) e 5) em apenas um programa

4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.

 5) Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não
dentro do retângulo.




*/
#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x;
    float y;
};

struct retangulo{
    struct ponto pSupeior;
    struct ponto pInferior;
};

int main()
{
    float b_base, h_altura, area, perimetro, diagonal;
    struct retangulo retg;
    struct ponto p;

    printf("\n****Para Ponto inferior direito****\n");
    printf("Coordenada x: ");
    scanf("%f", &retg.pInferior.x);
    printf("Coordenada y: ");
    scanf("%f", &retg.pInferior.y);

    printf("\n****Para Ponto superior esquerdo****\n");
    printf("Coordenada x: ");
    scanf("%f", &retg.pInferior.x);
    printf("Coordenada y: ");
    scanf("%f", &retg.pInferior.y);

    printf("\n****Para o Ponto****\n");
    printf("Coordenada x: ");
    scanf("%f", &p.x);
    printf("Coordenada y: ");
    scanf("%f", &p.y);

    b_base = retg.pInferior.x - retg.pSupeior.x;
    h_altura = retg.pSupeior.y - retg.pInferior.x;

    area = b_base * h_altura;
    perimetro = 2 * (b_base + h_altura);
    diagonal = sqrt(pow(b_base, 2)+ pow(h_altura, 2));

    printf("****VERIFICANDO SE O PONTO ESTA OU NAO DENTRO DO RETANGULO...****");
    if((p.x >= retg.pSupeior.x && p.x <= retg.pInferior.x) &&(p.y <= retg.pSupeior.y &p.y >= retg.pInferior.y)){
        printf("O ponto esta dentro do retangulo.\n");
    }else{
        printf("O ponto nao esta dentro do retangulo.\n");
    }

    printf("****CALCULANDO A AREA E O COMPRIMENTO DA DIAGONAL E O PERIMETRO DESSE RETANGULO...****");
    printf("\nResultado da Area: %.2f\n", area);
    printf("\nResultado do Perimetro: %.2f\n", perimetro);
    printf("\nResultado da Diagonal: %.2f\n", diagonal);

    system("pause");
    return 0;
}
