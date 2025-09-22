
#include <stdio.h>

int main() {
    int num1, num2, opcao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("\nMenu de Opções:\n");
    printf("1 - Verificar se são iguais ou diferentes\n");
    printf("2 - Mostrar o maior número\n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			if ( num1 == num2 )
				printf("Os numeros sao iguais\n");
			else
				printf("Os numeros sao diferentes\n");	
			break;
		case 2:
			if ( num1 > num2 )
				printf("Maior numero: %d\n", num1);
			else
				printf("Maior numero: %d\n", num2);
			break;
		default:
			printf("Opcao invalida!\n");
	}
	
	return 0;
}
