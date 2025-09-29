#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    int ano;
    float preco;
};

struct Filme {
    char titulo[100];
    int ano;
    int duracao_min;
};

enum TipoConteudo {
    TIPO_LIVRO,
    TIPO_FILME
};

struct Conteudo {
    enum TipoConteudo tipo; 
    
    union {
        struct Livro livro;
        struct Filme filme;
    } dados;
};

void preenche(struct Conteudo *c) {
    int escolha;

    printf("Qual tipo de conteudo voce quer preencher?\n");
    printf("0 - Livro\n1 - Filme\nEscolha: ");
    if (scanf("%d", &escolha) != 1) return;

    c->tipo = (escolha == 0) ? TIPO_LIVRO : TIPO_FILME;

    if (c->tipo == TIPO_LIVRO) {
        printf("\n--- Preenchendo Livro ---\n");
        struct Livro *l = &c->dados.livro; 
        
        printf("Digite o titulo do livro: ");
        scanf(" %99[^\n]", l->titulo);
        printf("Digite o ano de publicacao: ");
        scanf("%d", &l->ano);
        printf("Digite o preco: ");
        scanf("%f", &l->preco);
        
    } else if (c->tipo == TIPO_FILME) {
        printf("\n--- Preenchendo Filme ---\n");
        struct Filme *f = &c->dados.filme;
        
        printf("Digite o titulo do filme: ");
        scanf(" %99[^\n]", f->titulo);
        printf("Digite o ano de lancamento: ");
        scanf("%d", &f->ano);
        printf("Digite a duracao (minutos): ");
        scanf("%d", &f->duracao_min);
    }
}

void exibe(const struct Conteudo *c) {
    printf("\n==================================\n");
    
    if (c->tipo == TIPO_LIVRO) {
        printf("Tipo: LIVRO\n");
        struct Livro *l = &c->dados.livro;
        printf("Titulo: %s\n", l->titulo);
        printf("Ano: %d\n", l->ano);
        printf("Preco: R$ %.2f\n", l->preco);
        
    } else if (c->tipo == TIPO_FILME) {
        printf("Tipo: FILME\n");
        struct Filme *f = &c->dados.filme;
        printf("Titulo: %s\n", f->titulo);
        printf("Ano: %d\n", f->ano);
        printf("Duracao: %d minutos\n", f->duracao_min);
    } else {
        printf("Tipo de conteudo desconhecido.\n");
    }
    printf("==================================\n");
}

int main() {
    struct Conteudo item; 

    preenche(&item); 

    exibe(&item);
    
    return 0;
}