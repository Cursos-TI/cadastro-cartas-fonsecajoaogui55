#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char codigo[4];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;

  // Área para entrada de dados
  printf("Cadastro da carta\n");

  printf("Digite o codigo da carta: ");
  scanf("%3s", codigo);

  printf("Digite populacao: ");
  scanf("%d", &populacao);

  printf("Digite a area: ");
  scanf("%f", &area);

  printf("Digite o pib: ");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("\nDados da carta\n");
  printf("codigo: %s\n", codigo);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f\n", area);
  printf("Pib: %.2f\n", pib);
  printf("Pontos turisticos: %d\n", pontosTuristicos);

  return 0;
} 
