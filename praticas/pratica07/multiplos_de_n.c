#include <stdio.h>

int main() {

    int N, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    printf("Multiplos de %d entre 1 e 100:\n", N);

    for(i = 1; i <= 100; i++) {

        if(i % N == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
