#include <stdio.h>


int main()
{
    float deposito, taxa, rendimento, total;

    printf("Digite o valor a ser depositado: ");
    scanf("%f", &deposito);

    printf("\nDigite a taxa de juros: ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa/100);
    total = deposito + rendimento;
    printf("\nO valor do rendimento foi de: %.2f", rendimento);
    printf("\nO saldo total em conta e de: %.2f", total);
    return 0;
}