#include <stdio.h>

struct Livro {
    char titulo[100];
    int ano;
    float preco;
};

void preenche(struct Livro *l) {
    printf("Digite o titulo do livro: ");
    scanf(" %99[^\n]", l->titulo);
    printf("Digite o ano de publicacao: ");
    scanf("%d", &l->ano);
    printf("Digite o preco: ");
    scanf("%f", &l->preco);
}

int main() {
    struct Livro meu_livro;
    preenche(&meu_livro);
    
    printf("Titulo: %s, Ano: %d, Preco: %.2f\n", meu_livro.titulo, meu_livro.ano, meu_livro.preco);

    return 0;
}