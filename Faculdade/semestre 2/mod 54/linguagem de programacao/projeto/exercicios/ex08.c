#include <stdio.h>

int main()
{
    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\nDigite seu sexo sendo F para feminino e M para masculino: ");
    scanf("%s", &sexo);

    if ((sexo == 'F') || (sexo == 'f'))
        peso_ideal = (62.1 * altura) -58;
    else
        peso_ideal = (72.7 * altura) - 44.7;
    
    printf("\nO seu peso ideal e %.2f", peso_ideal);
    return 0;
}