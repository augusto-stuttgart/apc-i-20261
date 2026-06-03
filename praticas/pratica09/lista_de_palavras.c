#include <stdio.h>

int main() {

    int N, i;
    char palavras[100][50];

    printf("Quantas palavras deseja armazenar? ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
    }

    printf("\nPalavras armazenadas:\n");

    for(i = 0; i < N; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
