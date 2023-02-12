#include <stdio.h>                        
#include <math.h>

int main()

{
    printf("Exercício 5\n");

    float r;

     printf("Digite o primeiro numero: \n");
    scanf("%f", &r);

    double raio = M_PI * r * r ;

    printf("Um círculo com raio %f tem área igual a %f.", r, raio);

}