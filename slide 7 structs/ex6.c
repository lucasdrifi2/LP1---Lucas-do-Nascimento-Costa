#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    int idade;
    float altura;
    char posicao[30];
};

void exibirAtleta(struct Atleta a) {
    printf("--- Informacoes do Atleta ---\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d anos\n", a.idade);
    printf("Altura: %.2f m\n", a.altura);
    printf("Posicao: %s\n", a.posicao);
    printf("-----------------------------\n\n");
}

int main() {
    struct Atleta atleta1;
    strcpy(atleta1.nome, "LeBron James");
    atleta1.idade = 38;
    atleta1.altura = 2.06;
    strcpy(atleta1.posicao, "Ala");
    exibirAtleta(atleta1);

    struct Atleta atleta2;
    strcpy(atleta2.nome, "Stephen Curry");
    atleta2.idade = 35;
    atleta2.altura = 1.91;
    strcpy(atleta2.posicao, "Armador");
    exibirAtleta(atleta2);

    struct Atleta atleta3 = {"Kevin Durant", 35, 2.08, "Ala"};
    exibirAtleta(atleta3);

    return 0;
}