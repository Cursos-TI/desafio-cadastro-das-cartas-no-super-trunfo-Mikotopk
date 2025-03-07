#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
            char estado1[2], estado2[2] ;
            char codigo_da_carta1[4], codigo_da_carta2[4] ;
            char nome_da_cidade1[30],nome_da_cidade2[30] ;
            unsigned long int populacao1,populacao2 ;
            float area1,area2 ;
            float pib1,pib2 ;
            int pontos_turisticos1,pontos_turisticos2 ;
            float densidade_populacional1,densidade_populacional2;
            float pib_per_capita1,pib_per_capita2; 
            float super_poder1,super_poder2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

                //Entrada dos dados da primeira carta//
                printf("\n--- Digite os dados da primeira carta---\n");
                printf("Digite o estado (A-h): \n");
                scanf( "%s", estado1);

                printf("Digite o código da carta (01-04): \n");
                scanf("%s", codigo_da_carta1);

                printf("Digite o nome da cidade: \n");
                scanf(" %[^\n]", nome_da_cidade1);

                printf("Digite o número da população: \n");
                scanf("%lu", &populacao1);

                printf("Digite a área (em km²): \n");
                scanf("%f", &area1);

                printf("Digite o PIB (em milhões): \n");
                scanf( "%f", &pib1);

                printf("Digite o número de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos1);
                //Calculos da primeira carta
                densidade_populacional1 = (area1 !=0) ? populacao1 / area1 : 0;
                pib_per_capita1 = (populacao1 !=0) ? pib1 / populacao1 : 0;
                super_poder1 = populacao1 + area1 + pib1 + densidade_populacional1 + pib_per_capita1 + pontos_turisticos1;

                //Entrada dos dados da segunda carta//
                printf("\n--- Digite os dados da segunda carta---\n");
                printf("Digite o estado (A-h): \n");
                scanf( "%s", estado2);

                printf("Digite o código da carta (01-04): \n");
                scanf("%s", codigo_da_carta2);

                printf("Digite o nome da cidade: \n");
                scanf(" %[^\n]", nome_da_cidade2);

                printf("Digite o número da população: \n");
                scanf("%lu", &populacao2);

                printf("Digite a área (em km²): \n");
                scanf("%f", &area2);

                printf("Digite o PIB (em milhões): \n");
                scanf( "%f", &pib2);

                printf("Digite o número de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos2);
                //Calculos da segunda  carta
                densidade_populacional2 = (area2 !=0) ? populacao2 / area2 : 0;
                pib_per_capita2 = (populacao2 !=0) ? pib2 / populacao2 : 0;
                super_poder2 = populacao2 + area2 + pib2 + densidade_populacional2 + pib_per_capita2 + pontos_turisticos2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

                //Exibição da primeira carta

                printf("\n--- Dados da primeira carta ---\n");
                printf("Estado: %s\n",estado1);
                printf("Código da carta: %s%s\n",estado1,codigo_da_carta1);
                printf("Nome da cidade: %s\n",nome_da_cidade1);
                printf("População: %lu\n",populacao1);
                printf("Área: %.2f km²\n",area1);
                printf("Densidade populacional: %.2f hab/km²\n",densidade_populacional1);
                printf("PIB: %.2f milhões\n",pib1);
                printf("PIB per capita: %.2f milhões/habitante\n",pib_per_capita1);
                printf("Número de pontos turísticos: %d\n",pontos_turisticos1);
                printf("Super poder: %.2f\n",super_poder1);

                //Exibição da segunda carta

                printf("\n--- Dados da segunda carta ---\n");
                printf("Estado: %s\n",estado2);
                printf("Código da carta: %s%s\n",estado1,codigo_da_carta2);
                printf("Nome da cidade: %s\n",nome_da_cidade2);
                printf("População: %lu\n",populacao2);
                printf("Área: %.2f km²\n",area2);
                printf("Densidade populacional: %.2f hab/km²\n",densidade_populacional2);
                printf("PIB: %.2f milhões\n",pib2);
                printf("PIB per capita: %.2f milhões/habitante\n",pib_per_capita2);
                printf("Número de pontos turísticos: %d\n",pontos_turisticos2);
                printf("Super poder: %.2f\n",super_poder2);

                //compara e exibe os super poderes e mostra o vencedor
                printf("Carta 1 é maior que carta 2? %d\n",super_poder1 > super_poder2);



    return 0;
}
