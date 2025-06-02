#include <stdio.h>

// Função principal do programa
int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // Modificador de tipo para acomodar números maiores
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1; // Nova variável

    // --- Declaração de Variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; // Modificador de tipo para acomodar números maiores
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2; // Nova variável

    // --- Variáveis para armazenar o resultado das comparações (1 ou 0) ---
    int vitoriaPopulacao, vitoriaArea, vitoriaPib, vitoriaPontos, vitoriaDensidade, vitoriaPibPerCapita, vitoriaSuperPoder;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // %lu é o especificador para unsigned long int
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cálculos para a Carta 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    // Cálculo do Super Poder (convertendo todos os tipos para float para a soma)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos para a Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // --- Lógica de Comparação ---
    // Para a maioria, maior valor vence (resultado é 1 se carta 1 > carta 2)
    vitoriaPopulacao = populacao1 > populacao2;
    vitoriaArea = area1 > area2;
    vitoriaPib = pib1 > pib2;
    vitoriaPontos = pontosTuristicos1 > pontosTuristicos2;
    vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
    vitoriaSuperPoder = superPoder1 > superPoder2;
    // Regra especial: para densidade, menor valor vence (resultado é 1 se carta 1 < carta 2)
    vitoriaDensidade = densidadePopulacional1 < densidadePopulacional2;


    // --- Exibição dos Dados das Cartas (Opcional, mas bom para conferir) ---
    printf("\n\n--- Cartas Cadastradas ---\n");
    printf("\nCarta 1: %s (%s)\n", nomeCidade1, codigoCarta1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\nCarta 2: %s (%s)\n", nomeCidade2, codigoCarta2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Exibição dos Resultados das Comparações ---
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Populacao: %s (%d)\n", (vitoriaPopulacao ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaPopulacao);
    printf("Area: %s (%d)\n", (vitoriaArea ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaArea);
    printf("PIB: %s (%d)\n", (vitoriaPib ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaPib);
    printf("Pontos Turisticos: %s (%d)\n", (vitoriaPontos ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaPontos);
    printf("Densidade Populacional: %s (%d)\n", (vitoriaDensidade ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaDensidade);
    printf("PIB per Capita: %s (%d)\n", (vitoriaPibPerCapita ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaPibPerCapita);
    printf("Super Poder: %s (%d)\n", (vitoriaSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu"), vitoriaSuperPoder);

    return 0;
}