#include <stdio.h>
#include "str.h"
int main (void) {
    char str[101], str1[51], str2[51];
    printf("Digite uma seq��ncia de caracteres: ");
    scanf(" %50[^\n]", str1);
    printf("Digite outra seq��ncia de caracteres: ");
    scanf(" %50[^\n]", str2);
    copia(str, str1);
    concatena(str, str2);
    printf("Comprimento da concatena��o: %d\n",comprimento(str));
    return 0;
}
