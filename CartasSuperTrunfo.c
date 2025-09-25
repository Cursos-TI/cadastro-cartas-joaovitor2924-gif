#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado1,codigo1[3],cidade1[10],estado2,codigo2[3],cidade2[10];
    int populacao1,pontos1,populacao2,pontos2;
    float area1,pib1,area2,pib2;

    printf("Desafio Super Trunfo!\n");

    printf("Primeira carta\n");

    printf("Digite o estado:");
    scanf("%s",&estado1);

    printf("Digite o codigo da carta:");
    scanf("%c",&codigo1);

    printf("Digite o nome da cidade:");
    scanf("%c",&cidade1);

    printf("Digite o numero de habitantes:");
    scanf("%d",&populacao1);

    printf("Digite a área: ");
    scanf("%f",&area1);

    printf("Digite o PIB: ");
    scanf("%f",&pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&pontos1);

    printf("Carta 1:\n");


return 0;
} 
