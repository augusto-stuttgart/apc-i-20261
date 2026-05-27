#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nValor original: %d\n", numero);

    // Pré-incremento
    printf("Pre-incremento: %d\n", ++numero);

    // Pós-incremento
    printf("Pos-incremento: %d\n", numero++);

    printf("Valor apos pos-incremento: %d\n", numero);

    // Pré-decremento
    printf("Pre-decremento: %d\n", --numero);

    // Pós-decremento
    printf("Pos-decremento: %d\n", numero--);

    printf("Valor apos pos-decremento: %d\n", numero);

    return 0;
}
