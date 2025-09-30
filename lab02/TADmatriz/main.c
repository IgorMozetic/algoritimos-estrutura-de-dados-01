#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{

    int m, n, i, j;
    printf("Entre com o numero de linhas da matriz\n");
    scanf("%d", &m);
    printf("Entre com o numero de colunas da matriz\n");
    scanf("%d", &n);
    Matriz *mat = mat_cria (m, n);

    for (i=0;i < m;i++)
        for (j=0;j < n;j++)
            atribui_matriz (mat, i, j, i+j+1);

    for (i=0;i < m;i++) {
        for (j=0;j < n;j++)
            printf("%d ", acessa_matriz (mat, i, j));

        printf("\n");
    }

    libera_matriz(mat);
    return 0;
}
