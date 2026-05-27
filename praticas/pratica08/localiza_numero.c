#include <stdio.h>

int main() {

    int vetor[10];
    int numero, i, encontrado = 0;

    // Leitura do vetor
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Número a ser procurado
    printf("Digite o numero que deseja localizar: ");
    scanf("%d", &numero);

    // Busca no vetor
    for(i = 0; i < 10; i++) {
        if(vetor[i] == numero) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    // Caso não encontre
    if(encontrado == 0) {
        printf("O numero nao esta no vetor.\n");
    }

    return 0;
}
