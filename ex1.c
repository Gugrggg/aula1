#include <stdio.h>

int main()

{
    printf("Exercício 1\n");

    int a;
    int b;
    int div;
    int mult;
    int soma;
    int sub;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    div = a / b;
    mult = a*b;
    soma = a + b;
    sub = a - b;
    printf("Soma = %d, Subtração = %d, Divisão = %d, Multiplicação = %d", soma, sub, div, mult);

    return 0 ;
}