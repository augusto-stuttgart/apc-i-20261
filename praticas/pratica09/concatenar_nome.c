#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    char sobrenome[50];
    char nomeCompleto[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}

