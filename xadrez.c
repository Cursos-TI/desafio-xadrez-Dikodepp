#include <stdio.h>  

// Função: moverTorre
// Simula o movimento da torre para a direita, de forma recursiva.
// A torre se move uma vez para a direita e chama a função novamente até que o número de casas chegue a zero.
void moverTorre(int casa) {
    if (casa > 0) {

        printf("Direita\n");        // Imprime o movimento
        moverTorre(casa - 1);       // Chamada recursiva com uma casa a menos
    }
}

// Função interna: simula os dois passos de cada movimento (Cima, Direita)
void moverPassoBispo(int j) {
    if (j < 2) {
        if (j == 0) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
        moverPassoBispo(j + 1);  // Chama novamente com o próximo passo
    }
}

// Função externa: controla quantas vezes o bispo deve fazer o movimento completo
void moverBispoRecursivo(int i) {
    if (i < 5) {
        moverPassoBispo(0);         // Executa os dois movimentos
        moverBispoRecursivo(i + 1); // Chama a si mesma para repetir
    }
}
// Função: moverRainha
// Move a rainha 8 vezes para a esquerda.
// Usa um loop while para repetir os movimentos.
void moverRainhaRecursivo(int movimento) {
    if (movimento > 0){
        
        printf("Esquerda\n");
        moverRainhaRecursivo(movimento -1);
    }
}

// Função: moverCavalo
// Simula um movimento em "L" do cavalo: duas casas para cima e uma para a direita.
void moverCavalo() {
    for (int i = 0; i < 1; i++) {       // Apenas uma repetição do movimento em "L"
        for (int j = 0; j < 2; j++) {   // Duas casas para cima
            printf("Cima\n");
        }
        printf("Direita\n");           // Uma casa para a direita
    }
}

// Executa o programa, chamando as funções de movimento de cada peça.
// Imprime o nome da peça e os movimentos correspondentes.
int main() {
    printf("***Jogo Xadrez***\n"); //imprime o nome do jogo

    printf("\n");

    printf("Torre:\n");
    moverTorre(5);     // Move a torre 5 casas para a direita

    printf("\n");

    printf("Bispo:\n");
    moverBispoRecursivo(0);      // Move o bispo 5 vezes na horizontal e na diagonal (cima + direita)

    printf("\n");

    printf("Rainha:\n");
    moverRainhaRecursivo(8);     // Move a rainha 8 casas para a esquerda

    printf("\n");

    printf("Cavalo:\n");
    moverCavalo();     // Move o cavalo com 2 para cima e 1 para a direita (L)

    return 0;  // Finaliza o programa
}
