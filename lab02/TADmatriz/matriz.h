typedef struct matriz Matriz;

Matriz* mat_cria (int m, int n) ;

void atribui_matriz (Matriz* mat, int i, int j, int v);

int acessa_matriz (Matriz *mat, int i, int j);

// a ser implementada
//void imprime_matriz (Matriz* mat, int n_lin, int n_col);
//void imprime_matriz_arquivo (int** mat, int n_lin, int n_col);

void libera_matriz (Matriz *mat);

//a ser implementada
//void set_matriz (int** mat, int n_lin, int n_col, int valor);
