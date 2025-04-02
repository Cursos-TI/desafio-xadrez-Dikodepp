#include <stdio.h>

int main(){
    
    int bispo = 0;
    int rainha = 0;

    for (int i = 0; i < 5; i++) // movimento da torre 5 casas para a direita
    {
        printf("Direita\n");
    }

    //movimento do bispo 5 casa para cima, direita
    do
    {
        printf("cima, direita\n");
        bispo ++;
    } while (bispo < 5);
    
    //movimento da rainha 8 casas para esquerda
    while (rainha < 8)
    {
        printf("Esquerda \n");
        rainha ++;
    }
    

    return 0;
}
