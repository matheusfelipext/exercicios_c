#include <stdio.h>

/* Apelidos de tipos com typedef */
typedef unsigned char byte;    /* 0 a 255 */
typedef int inteiro;           /* numeros inteiros */
typedef double real;           /* numeros com casas decimais */

int main(void) {
    byte idade = 25;
    inteiro quantidade = 1500;
    real preco = 19.99;

    printf("=== Exercicio 6 - typedef ===\n");
    printf("byte (idade): %u\n", idade);
    printf("inteiro (quantidade): %d\n", quantidade);
    printf("real (preco): %.2f\n", preco);

    return 0;
}
