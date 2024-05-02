#include <stdio.h>

int main()
{
    int prato, bebida;
    int tot_cal = 0;
    printf("\nPratos do dia: \n");
    printf("\n 1 - Italiano \n 2 - Japones \n 3 - Salvadorenho\n");
    printf("\nDigite o numero do prato que deseja: ");
    scanf("%d", &prato);

    switch(prato)
    {
        case 1:
            tot_cal += 750;
            break;
        case 2:
            tot_cal += 324;
            break;
        case 3:
            tot_cal += 545;
            break;

        default:
            printf("\nOpcao invalida.");
            break;
    }

    printf("\n -- Agora vamos escolher sua bebida --\n");
    printf("\nBebidas disponiveis: \n");
    printf("\n 1 - Cha \n 2 - Suco de Laranja \n 3 - Refrigerante\n");
    printf("\nDigite o numero da bebida que deseja: ");
    scanf("%d", &bebida);

    switch(bebida)
    {
        case 1:
            tot_cal += 30;
            break;
        case 2:
            tot_cal += 80;
            break;
        case 3:
            tot_cal += 90;
            break;
        default:
            printf("\nOpcao invalida");
        break;
    }

    printf("\nTotal de calorias: %d", tot_cal);
    return 0;
}