#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Os divisores de %d são: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}