#include <stdio.h>

int main () {
    int idade;
    char* resultado;

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);
    printf("\n");
    resultado = (idade >= 18) ? "Maior de idade":"Menor de idade";
// a estrutura de um operador ternário é: variável + condição + "?" + (resultado se verdadeiro) + ":" + (resultado se falso)
    printf("%s\n", resultado);
    return 0;
}