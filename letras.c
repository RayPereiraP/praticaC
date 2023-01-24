int main(void)
{
    int opcao;
    printf("Digite um número por favor de 1 a 7:");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
        printf("Letra J!\n");
        break;

        case 2:
        printf("Letra V!\n");
        break;

        case 3:
        printf("Letra P!\n");
        break;

        case 4:
        printf("Letra T!\n");
        break;

        case 5:
        printf("Letra E!\n");
        break;

        case 6:
        printf("Letra R!\n");
        break;

        case 7:
        printf("Letra S!\n");
        break;
        default:
        printf("Eita, o número escolhido não tem uma letra definida! Tente novamente por favor de 1 a 7\n");
    }

    system ("pause");
    return (0);
}
