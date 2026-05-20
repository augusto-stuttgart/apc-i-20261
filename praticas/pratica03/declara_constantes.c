#include <stdio.h>

#define PI 3.14159265

int main() {

const double EULER = 2.71828182;

printf("Valor de PI: %.8f\n", PI);
printf("Valor de Euler: %.8lf\n", EULER);

// Tente descomentar a linha abaixo para ver o erro
// EULER = 3.0;

return 0;
}