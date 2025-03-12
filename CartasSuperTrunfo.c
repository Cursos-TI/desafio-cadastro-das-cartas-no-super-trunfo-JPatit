#include <stdio.h>
int main() {

    printf("Carta 1:\n");
    char Estado = 'A';
    char Codigo[10] = "A01";
    char Cidade[10] = "Sao Paulo";
    int Populacao = 22990000;
    float Area = 1521.11;
    float PIB = 1.6;
    int Turismo = 36;

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao %d\n", Populacao);
    printf("Area: %2.f km\n", Area);
    printf("PIB: %.2f trilhoes\n", PIB);
    printf("Turismo: %d\n", Turismo);

    printf("\n");

    printf("Carta 2:\n");
    char estado = 'B';
    char codigo [10] = "B01";
    char cidade [20] = "Rio de Janeiro";
    int populacao = 6211200;
    float area = 1200;
    float pib = 1.15;
    int turismo = 58;

    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao %d\n", populacao);
    printf("Area: %2.f km\n", area);
    printf("PIB: %.2f trilhoes\n", pib);
    printf("Turismo: %d\n", turismo);

    return 0;
}
