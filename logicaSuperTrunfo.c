#include <stdio.h>

int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;                   // Estado (A a H)
    int codigo1;                    // Código: número de 01 a 04
    char nomeCidade1[100];          // Nome do país
    int populacao1;                 // População
    float area1, pib1;              // Área (km²) e PIB (em bilhões de reais)
    int pontos1;                    // Número de pontos turísticos
    float densidade1, pibPerCapita1;  // Atributos calculados

    // --- Declaração de Variáveis para a Carta 2 ---
    char estado2;
    int codigo2;
    char nomeCidade2[100];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;
    
    // --- Leitura dos Dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo1);
    
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nomeCidade1); // Lê com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    // --- Cálculos para a Carta 1 ---
    densidade1 = populacao1 / area1;             // Densidade demográfica (hab/km²)
    pibPerCapita1 = pib1 / (float)populacao1;      // PIB per capita
    
    // --- Leitura dos Dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo2);
    
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    // --- Cálculos para a Carta 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    
    // --- Exibição dos Atributos Calculados ---
    printf("\n=== Atributos Calculados ===\n");
    printf("Carta 1 - Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("Carta 1 - PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Carta 2 - Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("Carta 2 - PIB per Capita: %.2f\n", pibPerCapita2);
    
    // --- Menu Interativo para Escolha de Dois Atributos ---
    // Lista de atributos disponíveis:
    // 1. População
    // 2. Área
    // 3. PIB
    // 4. Pontos Turísticos
    // 5. Densidade Demográfica (vence quem tem menor valor)
    // 6. PIB per Capita
    int attr1, attr2;
    
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &attr1);
    
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    if (attr1 != 1) printf("1. População\n");
    if (attr1 != 2) printf("2. Área\n");
    if (attr1 != 3) printf("3. PIB\n");
    if (attr1 != 4) printf("4. Pontos Turísticos\n");
    if (attr1 != 5) printf("5. Densidade Demográfica\n");
    if (attr1 != 6) printf("6. PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &attr2);
    
    if (attr1 == attr2) {
        printf("Você não pode escolher o mesmo atributo duas vezes. Execute o programa novamente.\n");
        return 1;
    }
    
    // --- Comparação dos Atributos Selecionados e Soma dos Valores ---
    float valorA1 = 0.0f, valorA2 = 0.0f;
    float soma1 = 0.0f, soma2 = 0.0f;
    
    // Comparação do Primeiro Atributo
    printf("\n--- Comparação do Primeiro Atributo ---\n");
    switch(attr1) {
        case 1: // População
            valorA1 = (float)populacao1;
            valorA2 = (float)populacao2;
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
            break;
        case 2: // Área
            valorA1 = area1;
            valorA2 = area2;
            printf("Atributo: Área (km²)\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
            break;
        case 3: // PIB
            valorA1 = pib1;
            valorA2 = pib2;
            printf("Atributo: PIB (bilhões de reais)\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
            break;
        case 4: // Pontos Turísticos
            valorA1 = (float)pontos1;
            valorA2 = (float)pontos2;
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, pontos1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, pontos2);
            break;
        case 5: // Densidade Demográfica
            valorA1 = densidade1;
            valorA2 = densidade2;
            printf("Atributo: Densidade Demográfica (hab/km²) - Menor vence\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidade2);
            break;
        case 6: // PIB per Capita
            valorA1 = pibPerCapita1;
            valorA2 = pibPerCapita2;
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapita2);
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            return 1;
    }
    
    // Utilizando operador ternário para determinar o vencedor
    if (attr1 == 5)
        printf("Resultado da comparação: %s venceu!\n", (valorA1 < valorA2) ? nomeCidade1 : (valorA1 > valorA2) ? nomeCidade2 : "Empate");
    else
        printf("Resultado da comparação: %s venceu!\n", (valorA1 > valorA2) ? nomeCidade1 : (valorA1 < valorA2) ? nomeCidade2 : "Empate");
    
    soma1 += valorA1;
    soma2 += valorA2;
    
    // Comparação do Segundo Atributo
    printf("\n--- Comparação do Segundo Atributo ---\n");
    switch(attr2) {
        case 1: // População
            valorA1 = (float)populacao1;
            valorA2 = (float)populacao2;
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
            break;
        case 2: // Área
            valorA1 = area1;
            valorA2 = area2;
            printf("Atributo: Área (km²)\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
            break;
        case 3: // PIB
            valorA1 = pib1;
            valorA2 = pib2;
            printf("Atributo: PIB (bilhões de reais)\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
            break;
        case 4: // Pontos Turísticos
            valorA1 = (float)pontos1;
            valorA2 = (float)pontos2;
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, pontos1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, pontos2);
            break;
        case 5: // Densidade Demográfica
            valorA1 = densidade1;
            valorA2 = densidade2;
            printf("Atributo: Densidade Demográfica (hab/km²) - Menor vence\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidade2);
            break;
        case 6: // PIB per Capita
            valorA1 = pibPerCapita1;
            valorA2 = pibPerCapita2;
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapita2);
            break;
        default:
            printf("Opção inválida para o segundo atributo.\n");
            return 1;
    }
    
    if (attr2 == 5)
        printf("Resultado da comparação: %s venceu!\n", (valorA1 < valorA2) ? nomeCidade1 : (valorA1 > valorA2) ? nomeCidade2 : "Empate");
    else
        printf("Resultado da comparação: %s venceu!\n", (valorA1 > valorA2) ? nomeCidade1 : (valorA1 < valorA2) ? nomeCidade2 : "Empate");
    
    soma1 += valorA1;
    soma2 += valorA2;
    
    // --- Comparação Final: Soma dos Dois Atributos ---
    printf("\n=== Resultado Final da Rodada ===\n");
    printf("Soma dos atributos escolhidos:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, soma1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, soma2);
    
    if (soma1 > soma2)
        printf("Resultado Final: Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Resultado Final: Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    else
        printf("Resultado Final: Empate!\n");
    
    return 0;
}
