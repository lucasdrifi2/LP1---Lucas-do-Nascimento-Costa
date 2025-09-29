#include <stdio.h>

union ponto {
        struct {
            int x;
            int y;
            int z;
        };
        int vec[3];
};

int main() {
    union ponto pt;

    pt.vec[0] = 10;
    pt.vec[1] = 20;
    pt.vec[2] = 30;

    printf("Ponto: (%d, %d, %d)\n", pt.x, pt.y, pt.z);

    return 0;
}