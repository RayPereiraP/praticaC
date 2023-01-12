int main()
{
    float nota1, nota2, media;
    print("Digite a primeira nova: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scant("%f", &nota2);

    media = (nota1 = nota2)/2;

    if (media>=5)
    {
        printf("Muito bem! Aprovado(a)!\n");
    }

    else
    {
        printf("No momento é preciso estudar mais um pouco, mas calma, você vai conseguir!!!\n");
    }

    system("pause");
    return(0);
}
