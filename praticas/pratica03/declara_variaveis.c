#include <stdio.h>
int main() {

int idade = 18;
char sexo = 'M';
float altura = 1.65f;
double peso = 85.52;

printf("Idade: %d\n", idade);
printf("Sexo: %c\n", sexo);
printf("Altura: %.2f\n", altura);
printf("Peso: %.3lf\n", peso);

return 0;
}