#include <stdio.h>

int main() {
    // Torre
    int casasTorre = 5; // número de casas que a torre deve andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    // Bispo
    int casasBispo = 5; // número de casas que o bispo deve andar
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }
    // Rainha
    int casasRainha = 8; // número de casas que a rainha deve andar
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
