#include <stdio.h>
int main() {

    printf("Carta 1:\n");
    char Estado = 'A';
    char Codigo[10] = "A01";
    char Cidade[10] = "Sao Paulo";
    int Populacao = 11895578;
    float Area = 1521.20;
    float PIB = 857.62;
    int Turismo = 36;
    float Densidade_Populacional = (float) Populacao / Area;
    float PIB_per_capita = (PIB * 1000000000) / Populacao;
    float Super_Poder = Populacao + Area + PIB + Turismo + (1/Densidade_Populacional) + PIB_per_capita;

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao %d\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f bilhoes\n", PIB);
    printf("Turismo: %d\n", Turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita);
    printf("Super Poder: %.2f\n", Super_Poder);

    printf("\n");

    printf("Carta 2:\n");
    char estado = 'B';
    char codigo [10] = "B01";
    char cidade [20] = "Rio de Janeiro";
    int populacao = 6729894;
    float area = 1200;
    float pib = 400.00;
    int turismo = 58;
    float densidade_populacional = (float) populacao / area;
    float Pib_per_capita = (pib * 1000000000) / populacao;
    float super_poder = populacao + area + pib + turismo + densidade_populacional + Pib_per_capita;

    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao %d\n", populacao);
    printf("Area: %.f km²\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Turismo: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f reais\n", Pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder);

    printf("\n");

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu: %d\n", Populacao > populacao);
    printf("Área: Carta 1 venceu: %d\n", Area > area);
    printf("PIB: Carta 1 venceu: %d\n", PIB > pib);
    printf("Turismo: Carta 2 venceu: %d\n", Turismo > turismo);
    printf("PIB per Capita: Carta 1 venceu: %d\n", PIB_per_capita > Pib_per_capita);
    printf("Densidade Populacional: Carta 2 venceu: %d\n", Densidade_Populacional < densidade_populacional);
    printf("Super Poder: Carta 1 venceu: %d\n", Super_Poder > super_poder);

    return 0;
}