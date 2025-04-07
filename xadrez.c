#include <stdio.h>

int main(){
    
    int bispo = 0;
    int rainha = 0;
    int movimentoDocavalo = 1;

    printf("Torre:\n");

    for (int i = 0; i < 5; i++) // movimento da torre 5 casas para a direita
    {
        printf("Direita\n");
    }

    printf("\n");

    printf("Bispo:\n");
    //movimento do bispo 5 casa para cima, direita
    do
    {
        printf("cima, direita\n");
        bispo ++;
    } while (bispo < 5);
    
    printf("\n");

    printf("Rainha:\n");
    //movimento da rainha 8 casas para esquerda
    while (rainha < 8)
    {
        printf("Esquerda \n");
        rainha ++;
    }

    printf("\n");

    printf("Cavalo:\n");
    // movimento do cavalo 2 vezes para cima e uma pra direita

    while (movimentoDocavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        
    }
    

    return 0;
}