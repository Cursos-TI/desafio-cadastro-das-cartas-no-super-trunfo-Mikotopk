#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
            char estado ;
            char codigo_da_carta[5] ;
            char nome_da_cidade[10] ;
            unsigned long int populacao ;
            float area ;
            float pib ;
            int pontos_turisticos ;
            float densidade_populacional;
            float pib_per_capita;
            float super_poder;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
                printf("Digite o estado (A-h): \n");
                scanf( "%c", &estado);

                printf("Digite o código da carta (01-04): \n");
                scanf("%s", codigo_da_carta);

                printf("Digite o nome da cidade: \n");
                scanf("%s", nome_da_cidade);

                printf("Digite o número da população: \n");
                scanf("%lu", &populacao);

                printf("Digite a área (em km²): \n");
                scanf("%f", &area);

                printf("Digite o PIB (em milhões): \n");
                scanf( "%f", &pib);

                printf("Digite o número de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos);   
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

                //calculos//
                densidade_populacional = populacao / area;
                pib_per_capita = pib / populacao;
                //calculo do super poder//
                super_poder = populacao + area + pib + densidade_populacional + pib_per_capita + pontos_turisticos;

                printf("Estado: %c\n",estado);
                printf("Código da carta: %c%s\n",estado,codigo_da_carta);
                printf("Nome da cidade: %s\n",nome_da_cidade);
                printf("População: %lu\n",populacao);
                printf("Área: %.2f km²\n",area);
                printf("Densidade populacional: %.2f hab/km²\n",densidade_populacional);
                printf("PIB: %.2f milhões\n",pib);
                printf("PIB per capita: %.2f milhões/habitante\n",pib_per_capita);
                printf("Número de pontos turísticos: %d\n",pontos_turisticos);
                printf("Super poder: %.2f\n",super_poder);
    return 0;
}
