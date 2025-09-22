
#include <stdio.h>

#define TAM 5

int main() {
    int numeros[TAM];
    int soma = 0, maior, menor;

    printf("Digite %d números inteiros:\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];
    
    for(int i = 0; i < TAM; i++) {
        if ( maior < numeros[i] )
        	maior = numeros[i];
        else if ( menor > numeros[i] )
        	menor = numeros[i];
        soma += numeros[i];
    }
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Soma: %d\n", soma);
    
	soma = 0;
	
	for(int i = 0; i < TAM; i++) {
		soma += *(numeros + i);
	}
	
    printf("Soma ponteiros: %d\n", soma);
	
	return 0;    
}
