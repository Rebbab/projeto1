#include <stdio.h>
    
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

//Pequeno detalhe sobre os inputs: o nome da cidade nao aceita nomes compostos pela limitação da função scanf que foi pedida.
//e para área espera-se que o valor seja em KM² 

int populacao1, populacao2, pt_turisticos1, pt_turisticos2;
float area1, area2, pib1, pib2;
float densidade1, densidade2, percapta1, percapta2;
char cidade1[30], codigo_carta1[5], cidade2[30], codigo_carta2[5];

void Input(){
    //coleta de dados carta 1
    printf("Insira os dados da primeira carta: \n");
    
    printf("codigo da carta 1: ");
    scanf(" %s", codigo_carta1);

    printf("Nome da cidade 1: ");
    scanf(" %s", cidade1);

    printf("area da cidade 1: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Populcao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Quantidade de pontos turisticos na cidade 1: ");
    scanf("%d", &pt_turisticos1);



    //coleta de dados carta 2
    
    printf("Insira os dados da segunda carta: \n");
    
    printf("codigo da carta 2: ");
    scanf(" %s", codigo_carta2);

    printf("Nome da cidade 2: ");
    scanf(" %s", cidade2);

    printf("area da cidade 2: ");
    scanf("%f", &area2);

    printf("PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Populcao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turisticos na cidade 2: ");
    scanf("%d", &pt_turisticos2);
    

}

float Operacoes(){
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapta1 = pib1 / populacao1;
    percapta2 = pib2 / populacao2;
}


void print(){
    //resultado da carta 1
    printf("CARTA 1:\n");
    printf("codigo da carta: %s \n", codigo_carta1);
    printf("nome da cidade: %s \n", cidade1);
    printf("Area da cidade: %f KM²\n", area1);
    printf("PIB da cidade: R$ %f \n", pib1);
    printf("Populacao da cidade: %d habitantes \n", populacao1);
    printf("Quantidade de pontos turisticos na cidade: %d \n", pt_turisticos1);
    printf("Densidade populacional: %f \n", densidade1);
    printf("PIB per capta: %f \n", percapta1);
    
    //resultado da carta 2
    
    printf("CARTA 2:\n");
    printf("codigo da carta: %s \n", codigo_carta2);
    printf("nome da cidade: %s \n", cidade2);
    printf("Area da cidade: %f KM² \n", area2);
    printf("PIB da cidade: R$ %f \n", pib2);
    printf("Populacao da cidade: %d habitantes \n", populacao2);
    printf("Quantidade de pontos turisticos na cidade: %d \n", pt_turisticos2);
    printf("Densidade populacional: %f \n", densidade2);
    printf("PIB per capta: %f \n", percapta2);
}



int main(){
    Input();
    Operacoes();
    print();  


    return 0;
}