#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para o movimento da Torre (horizontal para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (horizontal para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo (diagonal: cima-direita)
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Movimento do Bispo com loops aninhados (Correção aplicada)
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima Direita\n");
    }
}

// Movimento do Cavalo (duas casas para cima, uma para a direita) usando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("\nMovimento da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(5);
    
    printf("\nMovimento do Bispo (Loop Aninhado):\n");
    moverBispoLoop(5);
    
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
