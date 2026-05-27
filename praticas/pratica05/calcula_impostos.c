#include <stdio.h>

#define ICMS 0.17
#define ISS 0.05
#define PIS 0.0165

int main() {

    float valorProduto;
    float valorICMS, valorISS, valorPIS, precoFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    // Cálculo dos impostos
    valorICMS = valorProduto * ICMS;
    valorISS = valorProduto * ISS;
    valorPIS = valorProduto * PIS;

    // Cálculo do preço final
    precoFinal = (1 + ICMS + ISS + PIS) * valorProduto;

    printf("\n===== IMPOSTOS =====\n");

    printf("ICMS: R$ %.2f\n", valorICMS);
    printf("ISS: R$ %.2f\n", valorISS);
    printf("PIS: R$ %.2f\n", valorPIS);

    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}
