int main()
{
    int numero1, numero2;
    printf("Digite por gentileza o primeiro número\n");
    scanf("%d", &numero1);
    printf("Digite por gentileza o segundo número\n");
    scanf("%d", &numero2);

    if (numero1 == numero2)
        printf("Os números são iguais\n");

    else if (numero1 > numero2)
        printf("O maior valor é = %d", numero1);

        else
        printf("O maior valor é = %d", numero2);
        printf("\n");

    system ("pause");
    return (0);
}
