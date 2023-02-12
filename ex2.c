#include <stdio.h>

int main()

{
    printf("Exercício 2\n");

    float a;
    float b;
    float IMC;

    printf("Digite seu peso: \n");
    scanf("%f", &a);

    printf("Digite sua altura: \n");
    scanf("%f", &b);

    IMC = b / (a*a);

    printf("O IMC de uma pessoa com peso %f kg e altura %f IMC é igual a %f.", a, b, IMC);
}