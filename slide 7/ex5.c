#include <stdio.h>

struct Ponto {
    int x;
    int y;
    int z;
};

int main() {
    struct Ponto v1 = {1, 0, 5};
    struct Ponto v2 = {3, 3, 3};
    struct Ponto v3 = {0, 10, 0};

    printf("Coordenada y de v1: %d\n", v1.y);
    printf("Coordenada y de v2: %d\n", v2.y);
    printf("Coordenada y de v3: %d\n\n", v3.y);

    v1.z += 10;
    v2.z += 10;
    v3.z += 10;

    printf("Novas coordenadas z:\n");
    printf("v1.z: %d\n", v1.z);
    printf("v2.z: %d\n", v2.z);
    printf("v3.z: %d\n\n", v3.z);

    printf("Coordenadas de v2: (%d, %d, %d)\n", v2.x, v2.y, v2.z);

    return 0;
}