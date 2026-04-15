#include <stdio.h>

int main () {
int idade;
printf("entre com a sua idade:");
scanf("%i", &idade);
while(getchar() != '\n');

// && => 0 Falso E quanquer coisa= Sempre falso
printf("Voce eh uma crianca? %i\n", idade >=0 && idade <=12);


// || => 1 Verdadeiro OU qualquer coisa = Sempre verdadeiro
printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

// ! => NAO verdadeiro = Falso, NAO Falso = verdadeiro
printf("Voce naum pode votar? %i\n", !(idade >= 16))


    return 0; 
}