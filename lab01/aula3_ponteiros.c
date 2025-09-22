#include <stdio.h>

int main() {
    int a, b;
    int *ptrA, *ptrB;

    ptrA = &a;
    ptrB = &b;

    printf("Digite o primeiro valor: ");
    scanf("%d", ptrA);

    printf("Digite o segundo valor: ");
    scanf("%d", ptrB);

    printf("Endereco de a (ptrA): %p\n", ptrA);
    printf("Endereco de b (ptrB): %p\n", ptrB);

    printf("Valor de a: %d\n", *ptrA);
    printf("Valor de b: %d\n", *ptrB);
    
    printf("Soma pelo ponteiro: %d\n", *ptrA+*ptrB);

    return 0;
}

