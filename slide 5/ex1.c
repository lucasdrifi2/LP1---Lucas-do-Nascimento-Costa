#include <stdio.h>

void main(void) {
    int a, b;
    int *p;
    printf("Digite a e b:");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    if (a > b) {
        p = &a;
    } else {
        p = &b;
    }
    *p = *p - 50;
    printf("a = %d, b = %d\n", a, b);
}