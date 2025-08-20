#include <stdio.h>
    
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    int populacao1, populacao2, pt_turisticos1, pt_turisticos2;
    float area1, area2, pib1, pib2;
    char cidade1[30], codigo_carta1[5], cidade2[30], codigo_carta2[5];

    //coleta de dados carta 1
    printf("codigo da carta 1: ");
    scanf(" %s", codigo_carta1);

    printf("Nome da cidade 1: ");
    scanf(" %s", cidade1);

    printf("area da cidade 1 em KM²: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1: ");
    scanf("%f", &pib1);
//sei la oq era o erro, adriel goat
    printf("Populcao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Quantidade de pontos turisticos na cidade 1: \n");
    scanf("%d", &pt_turisticos1);



    //coleta de dados carta 2
    printf("codigo da carta 2: \n");
    scanf(" %s", codigo_carta2);

    printf("Nome da cidade 2: \n");
    scanf(" %s", cidade2);

    printf("area da cidade 2 em KM²: \n");
    scanf("%f", &area2);

    printf("PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Populcao da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turisticos na cidade 2: \n");
    scanf("%d", &pt_turisticos2);
    


    //resultado da carta 1
    printf("carta 1:\n");
    printf("codigo da carta: %s \n", codigo_carta1);
    printf("nome da cidade: %s \n", cidade1);
    printf("Area da cidade: %f \n", area1);
    printf("PIB da cidade: %f \n", pib1);
    printf("Populacao da cidade: %d \n", populacao1);
    printf("Quantidade de pontos turisticos na cidade: %d \n", pt_turisticos1);

    
    //resultado da carta 2
    
    printf("carta 2:\n");
    printf("codigo da carta: %s \n", codigo_carta2);
    printf("nome da cidade: %s \n", cidade2);
    printf("Area da cidade: %f \n", area2);
    printf("PIB da cidade: %f \n", pib2);
    printf("Populacao da cidade: %d \n", populacao2);
    printf("Quantidade de pontos turisticos na cidade: %d \n", pt_turisticos2);
    
      


    return 0;
}