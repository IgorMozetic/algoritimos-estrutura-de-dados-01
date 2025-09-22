/*
Implementar as funções declaradas:

	lerNotas

	calcularMedias

	mediaGeral

	maiorMedia

Criar a alocação dinâmica da matriz de notas e do vetor de médias no main.

Desenvolver o menu interativo utilizando switch.

Fazer a liberação da memória com free() no final do programa.

*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções
void lerNotas(float **notas, int n, int provas) {
	for(int i = 0; i < n; i++) {
		printf("\nAluno %d:\n", i + 1);
        for(int j = 0; j < provas; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
	}
}

void calcularMedias(float **notas, float *medias, int n, int provas) {
	for(int i = 0; i < n; i++) {
		float soma = 0;
		for (int j = 0; j < provas; j++)
			soma += notas[i][j];
		medias[i] = soma / provas;
	}
}

float mediaGeral(float *medias, int n) {
	float soma = 0;
	for(int i = 0; i < n; i++)
		soma += medias[i];
	return soma / n;
}

float maiorMedia(float *medias, int n) {
	float maior = medias[0];
	for(int i = 0; i < n; i++) {
		if ( maior < medias[i] )
			maior = medias[i];		
	}
	return maior;
}

int main() {
    int n, provas, opcao;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    printf("Quantas provas cada aluno realizou? ");
    scanf("%d", &provas);

    if(n <= 0 || provas <= 0) {
        printf("Valores inválidos para alunos ou provas.\n");
        return 1;
    }	
    
    float **notas = (float **) malloc(n * sizeof(float *));
    for(int i = 0; i < n; i++) {
        notas[i] = (float *) malloc(provas * sizeof(float));
    }

    float *medias = (float *) malloc(n * sizeof(float));
    
    lerNotas(notas, n, provas);
    calcularMedias(notas, medias, n, provas);
    
    do {
        printf("\n		MENU\n");
        printf("1 - Mostrar medias individuais\n");
        printf("2 - Mostrar media geral da turma\n");
        printf("3 - Mostrar maior media da turma\n");
        printf("4 - Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nMedias individuais:\n");
                for(int i = 0; i < n; i++) {
                    printf("Aluno %d: %.2f\n", i + 1, medias[i]);
                }
                break;

            case 2: {
                float geral = mediaGeral(medias, n);
                printf("\nMedia geral da turma: %.2f\n", geral);
                break;
            }

            case 3: {
                float maior = maiorMedia(medias, n);
                printf("\nMaior media da turma: %.2f\n", maior);
                break;
            }

            case 4:
                printf("\nSaindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao != 4);
    
	for (int i = 0; i < n; i++)
		free(notas[i]);
	free(notas);
	free(medias);
	
    return 0;
}
