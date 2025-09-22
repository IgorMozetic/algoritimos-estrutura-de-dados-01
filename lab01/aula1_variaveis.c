
#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Digite o valor de z: ");
    scanf("%d", &z);
    
    printf("Soma: %d\n", x + y);
    
    printf("Produto: %d\n", x * z);
    
    printf("Quociente: %.2f\n", (float)y / z);
    return 0;
}
