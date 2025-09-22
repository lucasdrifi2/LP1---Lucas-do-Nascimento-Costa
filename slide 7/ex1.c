#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

int main() {
    struct Personagem personagem1;
    personagem1.forca = 10;
    personagem1.energia = 50;
    personagem1.experiencia = 30;

    struct Personagem personagem2 = {18, 20, 25};

    return 0;
}