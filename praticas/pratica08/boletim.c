#include <stdio.h>

int main() {

    float notas[10][2];
    float media;
    int i, j;

    // Leitura das notas
    for(i = 0; i < 10; i++) {

        printf("\nAluno %d\n", i + 1);

        for(j = 0; j < 2; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Exibição do boletim
    printf("\n===== BOLETIM =====\n");

    for(i = 0; i < 10; i++) {

        media = (notas[i][0] + notas[i][1]) / 2;

        printf("Aluno %d -> Nota 1: %.2f | Nota 2: %.2f | Media: %.2f\n",
               i + 1,
               notas[i][0],
               notas[i][1],
               media);
    }

    return 0;
}
