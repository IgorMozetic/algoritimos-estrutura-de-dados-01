
#include <stdio.h>

#define LIN 3
#define COL 3

int main() {
    int matriz[LIN][COL];
    int somaTotal = 0, maior;

    printf("Digite os elementos da matriz %dx%d:\n", LIN, COL);
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    maior = matriz[0][0];
    
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            somaTotal += matriz[i][j];
            if (maior < matriz[i][j])
        		maior = matriz[i][j];
        	printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Soma: %d\n", somaTotal);
    printf("Maior: %d\n", maior);
    
    return 0;
 }
