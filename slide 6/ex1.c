#include <stdio.h>


void preenche(int* xs, int n) {

    for (int i = 0; i < n; i++) {
        scanf("%d", xs + i);
    }
}
float media(int* xs, int n) {

    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += *(xs + i);
    }
    return (float)soma / n;
}
void main(void) {

    int vec[100], n;

    scanf("%d", &n);
    preenche(vec, n);
    printf("%.2f", media(vec, n));

}