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

void lerPosicao(struct Posicao* pos) {
    printf("Digite a coordenada x: ");
    scanf("%d", &pos->x);
    printf("Digite a coordenada y: ");
    scanf("%d", &pos->y);
}

void lerPersonagem(struct Personagem* p, int id) {
    p->id = id;
    printf("Preenchendo o personagem de ID %d:\n", id);
    lerPosicao(&p->pos);
    p->pontuacao = 0;
}

void desenharMapa(struct Personagem personagens[], int numPersonagens) {
    char mapa[10][10];
    int i, j;
    

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            mapa[i][j] = ' ';
        }
    }

    
    for (i = 0; i < numPersonagens; i++) {
        if (personagens[i].pos.x >= 0 && personagens[i].pos.x < 10 &&
            personagens[i].pos.y >= 0 && personagens[i].pos.y < 10) {
            mapa[personagens[i].pos.y][personagens[i].pos.x] = (char)(personagens[i].id + '0');
        }
    }

   
    printf("\n  0 1 2 3 4 5 6 7 8 9\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
        for (j = 0; j < 10; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}

int main() {
    struct Personagem personagens[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        lerPersonagem(&personagens[i], i + 1);
    }
    
    desenharMapa(personagens, 10);
    
    return 0;
}