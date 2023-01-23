int main(void)
{
    int opcao;
    printf("Digite um número por favor de 1 a 7:");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
        printf("Seu dia escolhido foi domingo!\n");
        break;

        case 2:
        printf("Seu dia escolhido foi segunda-feira!\n");
        break;

        case 3:
        printf("Seu dia escolhido foi terça-feira!\n");
        break;

        case 4:
        printf("Seu dia escolhido foi quarta-feira!\n");
        break;

        case 5:
        printf("Seu dia escolhido foi quinta-feira!\n");
        break;

        case 6:
        printf("Seu dia escolhido foi sexta-feira!\n");
        break;

        case 7:
        printf("Seu dia escolhido foi sábado!\n");
        break;
        default:
        printf("Eita, não existe dia da semana para o número escolhido! Tente novamente de 1 a 7\n");
    }

    system ("pause");
    return (0);
}
