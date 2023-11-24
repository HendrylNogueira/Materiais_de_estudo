#include <stdio.h>

int main()
{
    char nome[30];
    int idade;

    printf("\nDigite o seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    
    if (idade <= 18)
        {
            printf("\nO valor da mensalidade e: R$50,00");
        }
    else
        {
            if (idade <= 29)
            {
                printf("\nO valor da mensalidade e: R$70,00");
            }
            else
            {
                if (idade <= 45)
                {
                    printf("\nO valor da mensalidade e: R$90,00");
                }
                else
                {
                    if (idade <= 65)
                    {    
                        printf("\nO valor da mensalidade e: R$130,00");
                    }
                    else
                    {
                        printf("\nO valor da mensalidade e: R$170,00");
                    }
                }
            }
        }
    return 0;
}