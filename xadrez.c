#include <stdio.h>

int main() {
    // Torre
    void moverTorre(int casas) {
        if (casas == 0) return;
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    // Bispo com loops aninhados
    void moverBispo(int casas) {
        if (casas == 0) return;

        // Loop aninhado para demonstrar cada casa na diagonal
        for (int i = 1; i <= 1; i++) {      // 1 casa diagonal
            for (int j = 1; j <= 1; j++) {  // segundo loop aninhado
                printf("Cima Direita\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva
    }
    // Rainha
   void moverRainha(int casas) {
        if (casas == 0) return;
        printf("Esquerda\n");
        moverRainha(casas - 1);
    // Cavalo (L) usando loops e condições
    void moverCavalo() {
        printf("Movimento do Cavalo (em L, para cima e direita):\n");

        int passosVertical = 2; // 2 casas para cima
        int passosHorizontal = 1; // 1 casa para direita

        for (int i = 0; i < passosVertical; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima\n");
                if (i == 1) break;
                if (j == 0) continue; 
            }
        }

        for (int k = 0; k < passosHorizontal; k++) {
            printf("Direita\n");
        }
    }
// Função
int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");
    moverCavalo();
}
    return 0;
}
