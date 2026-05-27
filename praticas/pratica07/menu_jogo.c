#include <stdio.h>

int main() {

    int opcao;

    do {

        printf("\n===== MENU DO JOGO =====\n");
        printf("1 - Novo jogo\n");
        printf("2 - Continuar jogo\n");
        printf("3 - Ver pontuacao\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Novo jogo iniciado!\n");
        }
        else if(opcao == 2) {
            printf("Continuando jogo...\n");
        }
        else if(opcao == 3) {
            printf("Exibindo pontuacao...\n");
        }
        else if(opcao == 4) {
            printf("Saindo do jogo...\n");
        }
        else {
            printf("Opcao invalida!\n");
        }

    } while(opcao != 4);

    return 0;
}
