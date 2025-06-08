#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeDaCidade1[30] = "SaoPaulo";
    int populacao1 = 12350000;
    float area1 = 1521.11;
    float pib1 = 869.28;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeDaCidade2[30] = "RioDeJaneiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.5;
    int pontosTuristicos2 = 50;

    // Cálculos da Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Cálculos da Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibindo dados da Carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    // Exibindo dados da Carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);

    return 0;
}
