#include <stdio.h>
#include <string.h>

int main() {

    char str1[50], str2[50], str3[50];
    char aux[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", str1);

    printf("Digite a segunda palavra: ");
    scanf("%s", str2);

    printf("Digite a terceira palavra: ");
    scanf("%s", str3);

    if(strcmp(str1, str2) > 0) {
        strcpy(aux, str1);
        strcpy(str1, str2);
        strcpy(str2, aux);
    }

    if(strcmp(str1, str3) > 0) {
        strcpy(aux, str1);
        strcpy(str1, str3);
        strcpy(str3, aux);
    }

    if(strcmp(str2, str3) > 0) {
        strcpy(aux, str2);
        strcpy(str2, str3);
        strcpy(str3, aux);
    }

    printf("\nStrings em ordem alfabetica:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}
