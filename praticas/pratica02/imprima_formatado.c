#include <stdio.h>
int main (){
    /*
    
==============================
     N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85
*/



int Qtd_Camiseta = 002;
int Qtd_Calca = 001;
int Qtd_Meias = 003;

float Valor_Camiseta = 39.99;
float Valor_Calca = 89.99;
float Valor_Meias = 19.99;
float Valor_TOTAL = 229.85;

printf("================================\n");
printf("     N O T A    L E G A L       \n");
printf("================================\n");
printf("Produto         Qtd   Valor Unit\n");
printf("CAMISETA    %i  %.2f\n", Qtd_Camiseta, Valor_Camiseta);
printf("CALCA       %i  %.2f\n", Qtd_Calca, Valor_Calca);
printf("MEIA SOCIAL %i  %.2f\n", Qtd_Meias, Valor_Meias);
printf("================================\n");
printf("TOTAL       %i  %.2f\n", Valor_TOTAL);

    return 0;
}    