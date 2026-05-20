#include <stdio.h>

int main() {

short int paises = 195;
int idiomas = 7100;
long long int populacao = 8274065924;
long double proporcao_aurea = 1.61803398874989484820L;

printf("Numero de paises: %hd\n", paises);
printf("Numero de idiomas: %d\n", idiomas);
printf("Populacao mundial: %lld\n", populacao);
printf("Proporcao aurea: %.20Lf\n", proporcao_aurea);

return 0;
}