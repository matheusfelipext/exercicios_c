#include <stdio.h>
#include <stdint.h>

/* Macros (pelo menos 3) */
#define MAX_PRODUTOS 100
#define NOME_TAM 50
#define ESTOQUE_MINIMO 5

/* typedef */
typedef struct {
    char nome[NOME_TAM];
    uint8_t categoria;     /* tipo de tamanho fixo: 0 a 255 */
    int32_t quantidade;    /* tipo de tamanho fixo: inteiro de 32 bits */
    float preco;
} Produto;

int main(void) {
    Produto estoque[MAX_PRODUTOS];

    /* Cadastrando um produto de exemplo */
    Produto p1;
    snprintf(p1.nome, NOME_TAM, "Caderno Universitario");
    p1.categoria = 1;
    p1.quantidade = 3;
    p1.preco = 15.90f;

    estoque[0] = p1;

    printf("=== Exercicio 9 - Cadastro de Produtos ===\n");
    printf("Capacidade maxima do sistema: %d produtos\n\n", MAX_PRODUTOS);

    printf("Produto: %s\n", estoque[0].nome);
    printf("Categoria: %u\n", estoque[0].categoria);
    printf("Quantidade em estoque: %d\n", estoque[0].quantidade);
    printf("Preco: R$ %.2f\n", estoque[0].preco);

    if (estoque[0].quantidade < ESTOQUE_MINIMO) {
        printf("\nATENCAO: estoque abaixo do minimo (%d unidades)!\n", ESTOQUE_MINIMO);
    }

    return 0;
}
