#include <stdio.h>

int main () {
    int idade;

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
          printf("Classificacao: Crianca\n");
    }
    else if (idade >= 13 && idade <= 17) {
          printf("Classificacao: Adolescente\n");
    }
    else if (idade >= 18 && idade <= 64) {
          printf("Classificacao: Adulto\n");
    }
    else if (idade >= 65) {
         printf("Classificacao: Idoso\n");
    }
   
 
    return 0;
}
    