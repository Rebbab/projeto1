#include <stdio.h>

int main(){

//quantidade de  movimentos por peça
int moverainha = 8;
int movebispo = 5;
int movetorre = 5;

//Movimentos da rainha
printf("******Movimento da Rainha******\n");
for (int i = 1; i <= moverainha; i++)
{
    printf("Esquerda\n");
}


//Movimentos do bispo
printf("******Movimento do Bispo******\n");
int i = 1;
while (i <= movebispo)
{
    printf("Cima e Cireita\n");
    i++;
}

//Movimentos da torre
printf("******Movimento da Torre******\n");
int j = 1;

do
{
    printf("Direita\n");
    j++;
} while (j <= movetorre);



//Movimentos do cavalo
printf("******Movimento da Cavalo******\n");
printf("under construction...\n");

    
    return 0;
}
