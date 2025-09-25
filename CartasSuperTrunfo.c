#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Carta A01
    int populacaoA01;
    float areaA01;
    float pibA01;
    int pontosTuristicosA01;

  // Carta A02
    int populacaoA02;
    float areaA02;
    float pibA02;
    int pontosTuristicosA02;
  
  // Área para entrada de dados

    printf("=== Cadastro das Cartas - Super Trunfo: Países ===\n\n");

    printf("Cadastro da carta A01\n");
    printf("População: ");
    scanf("%d", &populacaoA01);

    printf("Área em km²: ");
    scanf("%f", &areaA01);

    printf("PIB: ");
    scanf("%f", &pibA01);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA01);

    printf("\n");

    printf("Cadastro da carta A02\n");
    printf("População: ");
    scanf("%d", &populacaoA02);

    printf("Área em km²: ");
    scanf("%f", &areaA02);

    printf("PIB: ");
    scanf("%f", &pibA02);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA02);

    printf("\n");

  // Área para exibição dos dados da cidade

    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("Código da Carta: A01\n");
    printf("População: %d\n", populacaoA01);
    printf("Área: %.2f km²\n", areaA01);
    printf("PIB: %.2f \n", pibA01);
    printf("Pontos Turísticos: %d\n", pontosTuristicosA01);
    printf("---------------------------\n");

    printf("Código da Carta: A02\n");
    printf("População: %d\n", populacaoA02);
    printf("Área: %.2f km²\n", areaA02);
    printf("PIB: %.2f \n", pibA02);
    printf("Pontos Turísticos: %d\n", pontosTuristicosA02);
    printf("---------------------------\n");

return 0;
} 
