#include <stdio.h>
    
// Desafio Super Trunfo - Países
// Tema 3
// Segue com as mesmas limitações do anterior mas agora tem o menu


long int populacao1, populacao2; 
int pt_turisticos1, pt_turisticos2;
float area1, area2, pib1, pib2, super1, super2;
float densidade1, densidade2, percapta1, percapta2;
char cidade1[30], codigo_carta1[5], cidade2[30], codigo_carta2[5];
int opcao;

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

    super1 = area1 + pib1 + populacao1 + pt_turisticos1 + (1/densidade1) + percapta1;
    super2 = area2 + pib2 + populacao2 + pt_turisticos2 + (1/densidade2) + percapta2;

}

void print(){
    //resultado da carta 1
    printf("--------------------------------\n");
    printf("CARTA 1:\n");
    printf("codigo da carta: %s \n", codigo_carta1);
    printf("nome da cidade: %s \n", cidade1);
    printf("Area da cidade: %.2f KM²\n", area1);
    printf("PIB da cidade: R$ %.2f \n", pib1);
    printf("Populacao da cidade: %d habitantes \n", populacao1);
    printf("Quantidade de pontos turisticos na cidade: %d \n", pt_turisticos1);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf("PIB per capta: %.2f \n", percapta1);
    printf("Super: %.2f \n", super1);

    printf("--------------------------------\n");
    //resultado da carta 2
    
    printf("CARTA 2:\n");
    printf("codigo da carta: %s \n", codigo_carta2);
    printf("nome da cidade: %s \n", cidade2);
    printf("Area da cidade: %.2f KM² \n", area2);
    printf("PIB da cidade: R$ %.2f \n", pib2);
    printf("Populacao da cidade: %d habitantes \n", populacao2);
    printf("Quantidade de pontos turisticos na cidade: %d \n", pt_turisticos2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capta: %.2f \n", percapta2);
    printf("Super: %.2f \n", super2);

    printf("--------------------------------\n");


}


void comparacao(){
    //exibição do menu
    printf("Selecione o atributo que deseja comparar \n");
    printf("Area da cidade - 1 \n");
    printf("PIB da cidade - 2 \n");
    printf("Populacao da cidade - 3 \n");
    printf("Quantidade de pontos turisticos na cidade - 4 \n");
    printf("Densidade populacional - 5 \n");
    printf("PIB per capta - 6 \n");
    printf("Super - 7 \n");
    printf("Opção desejada: ");
    scanf("%d", &opcao);
    
    //Casos de opçao
    switch (opcao)
    {
    case 1:
        if (area1 > area2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;

    case 2:
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;

    case 3:
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;

    case 4:
        if (pt_turisticos1 > pt_turisticos2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;

    case 5:
        if (densidade1 < densidade2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;

    case 6:
        if (percapta1 > percapta2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;
    
 
    case 7:
        if (super1 > super2)
        {
            printf("Carta 1 venceu!");
        }else{
            printf("Carta 2 venceu!");
        }
        
        break;
    
    default:
        printf("Nenhuma opção selecionada \n");
        break;
    }
    
}


int main(){
    Input();
    Operacoes(); 
    print();
    comparacao();

    return 0;
}