// Professor por algum motivo no Codespaces nao esta funcionando o include do math ai nao funcionou o sqrt, eu testei no VScode instalado e funcionou

#include <stdio.h>                        
#include <math.h>
int main()

{
    printf("Exercício 4\n");

    float a;
    float b;
    

    printf("Digite o primeiro numero: \n");
    scanf("%f", &a);

    printf("Digite o segundo numero: \n");
    scanf("%f", &b);

    double c = (a*a)+(b*b) ;
    double h = sqrt(c);

    printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %lf.", a, b, h);

    return 0;
    // Professor por algum motivo no Codespaces nao esta funcionando o include do math ai nao funcionou o sqrt, eu testei no VScode instalado e funcionou
}