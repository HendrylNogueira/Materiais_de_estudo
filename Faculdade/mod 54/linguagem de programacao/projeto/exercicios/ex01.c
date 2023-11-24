int main()
{
    int numero, ante, suce;

    printf("Digite um numero e veja seu antecessor e sucessor:");
    scanf("%i", &numero);

    ante = numero - 1;
    suce = numero + 1;

    printf("Voce digitou o numero: %i", numero);
    printf("\nO antecessor desse numero e: %i", ante);
    printf("\nO sucessor desse numero e: %i", suce);
    return 0;
}
