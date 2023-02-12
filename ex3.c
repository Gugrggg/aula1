#include <stdio.h>

int main()

{
    printf("Exercício 3\n");

    float c;
    float f;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &c);

    f = (c*9/5) + 32;

    printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit.", c, f);

    return 0;


}