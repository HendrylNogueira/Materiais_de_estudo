#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, " ");

    int test;
    int entrada;
    int tot_impar = 0, tot_par = 0;

    #define test 0

    while (entrada != 0)
    {
        printf("Digite um valor: ");
        scanf("%d", &entrada);

        if (entrada % 2 == 0)
            tot_par ++;

        else
            tot_impar ++;
    } 
    printf("\nVoce digitou %d numeros pares", tot_par - 1);
    printf("\nVoce digitou %d numeros impares.", tot_impar);
    
    return 0;
}