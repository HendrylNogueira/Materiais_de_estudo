#include <stdio.h>

int main()
{
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade < 16)
    {
        printf("\nVoce ainda nao e um eleitor.");
    }
    else
        if (idade >= 18 && idade <= 65)
        {
            printf("\nVoce e um eleitor obrigatorio.");
        }
        else
            if (idade >= 16 && idade <= 17 || idade > 65)
            {
                printf("\nVoce e um eleitor facultativo.");
            }
    return 0;
}