#include <stdio.h>

int main() {
    int num, soma_divisores = 0, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }

    if (soma_divisores == num) {
        printf("%d é um número inteiro perfeito.\n", num);
    } else {
        printf("%d não é um número inteiro perfeito.\n", num);
    }

    return 0;
}