#include <stdio.h>

//função da torre
void movertorre(int casas){
    if (casas==0) return;
     printf("Direita\n");
     movertorre(casas - 1);   
}


//função da rainha
void moverrainha (int casas){
    if (casas==0) return;
     printf("Esquerda\n");
     moverrainha(casas - 1);   

}
// para torre e rainha funções recurssivas.

//função do bispo
void moverbispo(int casas){
    if (casas == 0) return;
    

    for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    
    moverbispo(casas - 1);

}
//para o bispo, loop aninhado além da recurssão.

//função do cavalo
void movercavalo(int movimentos){
    int movCima = 2;
    int movDireita = 1;


    for (int i = 0; i < movimentos; i++) {
        for (int cima = 0; cima < movCima; cima++) {
            printf("Cima\n");
            if (cima == 1 && movDireita == 1) {
                for (int dir = 0; dir < movDireita; dir++) {
                    if (dir == 0) {
                        printf("Direita\n");
                        break;
                    }
                }
            }
        }
    }
}
//para o cavalo, loops aninhados e continue/break


int main(){
//variaveis de quantidade de movimento por peça    
    int qtdmovtorre = 4;
    int qtdmovrainha = 4;
    int qtdmovebispo = 4;
    int qtdmovecavalo = 1;

//chamando as funções e organizando a saida
    printf("***Movimento Torre***\n");
    movertorre(qtdmovtorre);

    printf("***Movimento Torre***\n");
    moverrainha(qtdmovrainha);

    printf("***Movimento Bispo***\n");
    moverbispo(qtdmovebispo);

    printf("***Movimento Cavalo***\n");
    movercavalo(qtdmovecavalo);


    
    return 0;
}
