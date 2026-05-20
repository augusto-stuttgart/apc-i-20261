#include <stdio.h>

int main() {
int opcao;

// Exibição do menu
printf("===== MENU DO JOGO =====\n");
printf("1 - Novo Jogo\n");
printf("2 - Continuar Jogo\n");
printf("3 - Ver Pontuacao\n");
printf("4 - Sair\n");

// Entrada da opção
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

// Verificação da opção escolhida
if (opcao == 1) {
printf("Iniciando um novo jogo...\n");
}
else if (opcao == 2) {
printf("Continuando o jogo...\n");
}
else if (opcao == 3) {
printf("Exibindo a pontuacao...\n");
}
else if (opcao == 4) {
printf("Saindo do jogo...\n");
}
else {
printf("Opcao invalida!\n");
}

return 0;
}

