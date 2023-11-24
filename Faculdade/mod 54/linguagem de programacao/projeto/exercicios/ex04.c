#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, total;

    printf(" ");
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    total = pow(num1, num2);

    printf("\n%.2f elevado a %.2f e igual a %.2f.", num1, num2, total);
    printf(" ");
    return 0;
}