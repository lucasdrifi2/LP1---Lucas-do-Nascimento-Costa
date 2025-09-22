#include <stdio.h>

struct Posicao {
    int x;
    int y;
};

struct Personagem {
    int id;
    struct Posicao pos;
    int pontuacao;
};

int main() {
    struct Personagem personagens[10];
    
    int i;
    for (i = 0; i < 10; i++) {
        personagens[i].id = i + 1;
        personagens[i].pos.x = i * 2;
        personagens[i].pos.y = i * 3;
        personagens[i].pontuacao = 0;
    }
    
    
    printf("Lista de Personagens:\n");
    for (i = 0; i < 10; i++) {
        printf("ID: %d, Posicao: (%d, %d), Pontuacao: %d\n",
               personagens[i].id, personagens[i].pos.x, personagens[i].pos.y, personagens[i].pontuacao);
    }

    return 0;
}