#include <stdio.h>

int main () {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &dia);

    if (dia >= 1 && dia <= 5) {
       printf("Dia Util\n");
    }
    else if (dia == 6 || dia == 7) {
        printf("Final de Semana\n");
    }
    else {
        printf("Numero Invalido!!!\n");
    }

    return 0;
}    