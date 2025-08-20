#include <stdio.h>

int main() {

// Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[40];
    int populacao1, pturistico1;
    float area1, pib1, densidade1, pibpercapita1;

// Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[40];
    int populacao2, pturistico2;
    float area2, pib2, densidade2, pibpercapita2;

//Array de strings para facilitar a exibição do vencedor
    char cartas[2] = {"Carta 2", "Carta 1"};

 //Leitura dos dados da carta 1
    printf("Informe o Estado: ");
    scanf(" %c", &estado1);
    printf("Informe o código: ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %39[^\n]", cidade1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o números de pontos turísticos: ");
    scanf("%d", &pturistico1);
    printf("\n");

//Cálculo da densidade populacional e PIB per capita - carta 1
    densidade1 = (float) populacao1/area1;
    pibpercapita1 = pib1/(float) populacao1;

//Cálculo do Super Poder da carta 1
    float superpoderc1 = (float)populacao1 + (float)pturistico1 + area1 + pib1 + pibpercapita1 + 1/densidade1; 

// Leitura dos dados da carta 2
    printf("Informe o Estado: ");
    scanf(" %c", &estado2);
    printf("Informe o código: ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %39[^\n]", cidade2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o números de pontos turísticos: ");
    scanf("%d", &pturistico2);
    printf("\n");

//Cálculo da densidade populacional e PIB per capita - carta 2
    densidade2 = (float) populacao2/area2;
    pibpercapita2 = pib2/(float) populacao2;

//Cálculo do Super Poder da carta 2
    float superpoderc2 = (float)populacao2 + (float)pturistico2 + area2 + pib2 + pibpercapita2 + 1/densidade2; 

// Exibição dos dados da carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pturistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("\n");

// Exibição dos dados da carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

//Exibição dos resultados das comparações
    printf("\n");
    printf("Comparação de cartas:\n");
    printf("População: %s venceu(%d)", cartas[populacao1 > populacao2], [populacao1 > populacao2]);






    return 0;
}
