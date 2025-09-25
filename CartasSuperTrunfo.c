#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado1,codigo1[3],cidade1[10],estado2,codigo2[3],cidade2[10];
    int populacao1,pontos1,populacao2,pontos2;
    float area1,pib1,area2,pib2;

    printf("Desafio Super Trunfo!\n");

    printf("\nPrimeira carta\n");

    printf("Digite o estado: ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Digite a área: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %i", &pontos1);

    printf("Segunda carta!\n");

    printf("Digite o estado: ");
    scanf("%c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %i", &pontos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %fkm² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos1);

    Printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %fkm² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos2);



return 0;
} 
