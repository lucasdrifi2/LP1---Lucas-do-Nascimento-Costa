#include <stdio.h>
void troca(int* p1, int* p2) {

    int a = *p1;
    *p1 = *p2;
    *p2 = a;
}
void main(void) {

    int x = 10, y = 20;
    
    troca(x, y);
    printf("%d %d", x, y);
}