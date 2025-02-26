#include <stdio.h>
int main() {

    printf("Carta 1:\n");
    char Estado = 'A';
    char Código[10] = "A01";
    char Cidade[10] = "São Paulo";
    int População =  12325000;
    float Área = 1521.11;
    float PIB = 699.28;
    int Turismo = 50;

    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("População %d\n", População);
    printf("Área: %2.fkm\n", Área);
    printf("PIB: %f\n", PIB);
    printf("Turismo: %d\n", Turismo);

    return 0;
}
