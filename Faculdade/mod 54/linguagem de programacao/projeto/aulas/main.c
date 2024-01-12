#include <stdio.h>

int main()
{
    int numero, ante, suce;
	char nome[10];

    printf("Digite um numero e veja seu antecessor e sucessor:");
    scanf("%i", &numero);
	printf("Digite o nome:");

	gets(nome);

    ante = numero - 1;
    suce = numero + 1;

    printf("Voce digitou o numero: %i", numero);
    printf("\nO antecessor desse numero e: %i", ante);
    printf("\nO sucessor desse numero e: %i", suce);

	printf("\n%s", nome);
    return 0;
}
