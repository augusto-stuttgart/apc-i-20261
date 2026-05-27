#include <stdio.h>
#include <string.h>


  int main () {
    char texto [11];
    char *string;

    texto[0] = '0';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'p';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = '\0';

    printf("%s\n", texto);

    texto[3] = '\0';

    printf("%s\n", texto);
    
    for(int i = 0; i < 11; i++) {
        printf("%c", texto[i]);
    }
         printf("\n");

         strcpy(texto, "Bom");
          printf("%s\n", texto);


          strcpy(texto, "dia");
          printf("%s\n", texto);


        int tamanho = strlen(texto);
        printf("O tamanho do texto e %i\n", tamanho);
        int capacidade = sizeof(texto);
        printf("A capacidade do texto e %i\n", capacidade);

        memset(texto, 'a', 8);
        printf("%s\n", texto);

        memset(texto, '\0', capacidade);

             int compara = strcmp("banana", "laranja");
             printf("banana == laranja? %i\n", compara);

             compara = strcmp("laranja", "banana");
             printf("laranja == banana? %i\n", compara);

             compara = strcmp("banana", "banana");
             printf("banana == banana? %i\n, compara);

                compara = strcmp("banana", " BANANA");
             printf("banana == BANANA? %i\n, compara);

             char *tem_letra_a = strchr("sergipe", 'a');
             printf("a palavra sergipe tem letra a/? %i\n", tem_letra_a);

             tem_letra_a = strchr("acre", 'a');
             prinft("a palavra acre tem a letra a? %s\n", tem_letra_a);

             
           

            



             

   return 0;
  }