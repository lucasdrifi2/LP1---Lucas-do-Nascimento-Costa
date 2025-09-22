#include <stdio.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

void preencherPonto(struct Ponto* p) {
    printf("Digite a coordenada x: ");
    scanf("%d", &p->x);
    printf("Digite a coordenada y: ");
    scanf("%d", &p->y);
}

void preencherVetorDePontos(struct Ponto vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("Preenchendo o ponto %d:\n", i + 1);
        preencherPonto(&vetor[i]);
    }
}

struct Ponto pontoMaisDistante(struct Ponto vetor[], int tamanho) {
    int i;
    double maiorDistancia = 0.0;
    struct Ponto pontoDistante = {0, 0};

    for (i = 0; i < tamanho; i++) {
        double distancia = sqrt(pow(vetor[i].x, 2) + pow(vetor[i].y, 2));
        if (distancia > maiorDistancia) {
            maiorDistancia = distancia;
            pontoDistante = vetor[i];
        }
    }
    return pontoDistante;
}

int main() {
    struct Ponto pontos[10];

    preencherVetorDePontos(pontos, 10);

    struct Ponto maisDistante = pontoMaisDistante(pontos, 10);

    printf("\nO ponto mais distante da origem (0,0) eh: (%d, %d)\n", maisDistante.x, maisDistante.y);

    return 0;
}