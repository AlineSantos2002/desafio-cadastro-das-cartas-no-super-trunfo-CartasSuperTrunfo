#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeDaCidade1[30] = "SaoPaulo";
    unsigned long int populacao1 = 12350000;
    float area1 = 1521.11;
    float pib1 = 869.28;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeDaCidade2[30] = "RioDeJaneiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.5;
    int pontosTuristicos2 = 50;

    // Atributos calculados
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("Comparação entre cartas:\n\n");

    printf("População: %d\n", (populacao1 > populacao2)); // 1 se Carta 1 vence
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional (MENOR VENCE): %d\n", (densidade1 < densidade2));
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));

    // Super Poder (soma com densidade invertida)
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidade1) + pibPerCapita1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidade2) + pibPerCapita2;

    printf("\nSuper Poder da Carta 1: %.2f\n", superPoder1);
    printf("Super Poder da Carta 2: %.2f\n", superPoder2);
    printf("Vencedora pelo Super Poder: Carta %d\n", (superPoder1 > superPoder2 ? 1 : 2));

    return 0;
}
