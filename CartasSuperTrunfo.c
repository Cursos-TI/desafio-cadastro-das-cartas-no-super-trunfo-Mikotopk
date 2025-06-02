#include <stdio.h>

// Função principal do programa
int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;
    char codigoCarta1[5]; // Ex: "A01" + caractere nulo '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração de Variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Início da Interação com o Usuário ---
    printf("--- Cadastro da Carta 1 ---\n");

    // --- Leitura dos Dados da Carta 1 ---
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c consome qualquer 'enter' anterior

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê a linha inteira, permitindo nomes com espaços

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- Cadastro da Carta 2 ---\n");

    // --- Leitura dos Dados da Carta 2 ---
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Exibição dos Dados Cadastrados ---
    printf("\n\n--- Cartas Cadastradas ---\n");

    // Exibindo informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // Formata para 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibindo informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}