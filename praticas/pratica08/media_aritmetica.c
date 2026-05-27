#include <stdio.h>

int main() {

    int n, i;
    int numeros[100];
    float soma = 0, media;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    // Leitura dos números
    for(i = 0; i < n; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / n;

    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
