#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Definição das variáveis para armazenar as propriedades das cidades

    char Estado1[20], Nome_da_cidade1[20], Codigo1[10];
    int Populacao1, Pontosturisticos1;
    float Area1, Pib1;

    char Estado2[20], Nome_da_cidade2[20], Codigo2[10];
    int Populacao2, Pontosturisticos2;
    float Area2, Pib2;

    // Cadastro dos dados das duas cartas
    // Carta 1
    printf("Carta 1:\n");
    printf("Digite o Codigo da sua carta: \n");
    scanf("%s", Codigo1);
    printf("Código: %s\n", Codigo1);

    printf("Digite o Estado da sua Cidade: \n");
    scanf("%s", Estado1);
    printf("Estado: %s\n", Estado1);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", Nome_da_cidade1);
    printf("Cidade: %s\n", Nome_da_cidade1);

    printf("Digite a População: \n");
    scanf("%i", &Populacao1);
    printf("População: %i\n", Populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &Area1);
    printf("Área: %f\n", Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);
    printf("PIB: %f\n", Pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &Pontosturisticos1);
    printf("Pontos Turísticos: %i\n", Pontosturisticos1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Codigo da sua carta: \n");
    scanf("%s", Codigo2);
    printf("Código: %s\n", Codigo2);

    printf("Digite o Estado da sua Cidade: \n");
    scanf("%s", Estado2);
    printf("Estado: %s\n", Estado2);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", Nome_da_cidade2);
    printf("Cidade: %s\n", Nome_da_cidade2);

    printf("Digite a População: \n");
    scanf("%i", &Populacao2);
    printf("População: %i\n", Populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);
    printf("Área: %f\n", Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib2);
    printf("PIB: %f\n", Pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &Pontosturisticos2);
    printf("Pontos Turísticos: %i\n", Pontosturisticos2);

    // Calcular Densidade Populacional e PIB per capita para ambas as cartas
    float densidade_populacional1 = Populacao1 / Area1;
    float pib_per_capita1 = Pib1 / Populacao1;

    float densidade_populacional2 = Populacao2 / Area2;
    float pib_per_capita2 = Pib2 / Populacao2;

    // implementando a escolha do atributo que quero comparar
    int comparacao, comparacao2;
    int res1 = 0, res2 = 0;

    printf("\nEscolha um atributo para a primeira comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &comparacao);

    printf("\nEscolha um atributo para a segunda comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &comparacao2);
    if (comparacao == comparacao2)
    {
        printf("voce escolheu o mesmo atributo");
    }

       // Comparação dos atributos
    switch (comparacao)
    {
    case 1: // População
        printf("\nComparação de População:\n");
        printf("Carta 1 - %s (%s): %i\n", Nome_da_cidade1, Estado1, Populacao1);
        printf("Carta 2 - %s (%s): %i\n", Nome_da_cidade2, Estado2, Populacao2);
        res1 = (Populacao1 > Populacao2) ? 1 : 0;
        break;
    case 2: // Área
        printf("\nComparação de Área:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, Area1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, Area2);
        res1 = (Area1 > Area2) ? 1 : 0;
        break;
    case 3: // PIB
        printf("\nComparação de PIB:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, Pib1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, Pib2);
        res1 = (Pib1 > Pib2) ? 1 : 0;
        break;
    case 4: // Pontos Turísticos
        printf("\nComparação de Pontos Turísticos:\n");
        printf("Carta 1 - %s (%s): %i\n", Nome_da_cidade1, Estado1, Pontosturisticos1);
        printf("Carta 2 - %s (%s): %i\n", Nome_da_cidade2, Estado2, Pontosturisticos2);
        res1 = (Pontosturisticos1 > Pontosturisticos2) ? 1 : 0;
        break;
    case 5: // Densidade Populacional
        printf("\nComparação de Densidade Populacional:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, densidade_populacional2);
        res1 = (densidade_populacional1 > densidade_populacional2) ? 1 : 0;
        break;
    case 6: // PIB per Capita
        printf("\nComparação de PIB per Capita:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, pib_per_capita2);
        res1 = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }

    switch (comparacao2)
    {
    case 1: // População
        printf("\nComparação de População:\n");
        printf("Carta 1 - %s (%s): %i\n", Nome_da_cidade1, Estado1, Populacao1);
        printf("Carta 2 - %s (%s): %i\n", Nome_da_cidade2, Estado2, Populacao2);
        res2 = (Populacao1 > Populacao2) ? 1 : 0;
        break;
    case 2: // Área
        printf("\nComparação de Área:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, Area1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, Area2);
        res2 = (Area1 > Area2) ? 1 : 0;
        break;
    case 3: // PIB
        printf("\nComparação de PIB:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, Pib1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, Pib2);
        res2 = (Pib1 > Pib2) ? 1 : 0;
        break;
    case 4: // Pontos Turísticos
        printf("\nComparação de Pontos Turísticos:\n");
        printf("Carta 1 - %s (%s): %i\n", Nome_da_cidade1, Estado1, Pontosturisticos1);
        printf("Carta 2 - %s (%s): %i\n", Nome_da_cidade2, Estado2, Pontosturisticos2);
        res2 = (Pontosturisticos1 > Pontosturisticos2) ? 1 : 0;
        break;
    case 5: // Densidade Populacional
        printf("\nComparação de Densidade Populacional:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, densidade_populacional2);
        res2 = (densidade_populacional1 > densidade_populacional2) ? 1 : 0;
        break;
    case 6: // PIB per Capita
        printf("\nComparação de PIB per Capita:\n");
        printf("Carta 1 - %s (%s): %f\n", Nome_da_cidade1, Estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %f\n", Nome_da_cidade2, Estado2, pib_per_capita2);
        res2 = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
        break;
    default:
        break;
    }

    // Exibição do resultado
    if (res1 == 1 && res2 == 1)
    {
        printf("\nCarta 1 venceu em ambos os atributos!\n");
    }
    else if (res1 == 0 && res2 == 0)
    {
        printf("\nCarta 2 venceu em ambos os atributos!\n");
    }
    else
    {
        printf("\nEmpate!\n");
    }

    return 0;
}