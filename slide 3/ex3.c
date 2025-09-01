#include <stdio.h>

#define QTD_TEMPERATURAS 50

void main(void) {
    signed char temps[QTD_TEMPERATURAS];

    long int soma = 0;
    float media;
    int contador_acima_media = 0;
    int i;

    printf("Digite as %d temperaturas (valores entre -100 e 100):\n", QTD_TEMPERATURAS);
    for (i = 0; i < QTD_TEMPERATURAS; i++) {
        int temp_leitura;

        printf("Temperatura %d: ", i + 1);
        scanf("%d", &temp_leitura);

        if (temp_leitura < -100 || temp_leitura > 100) {
            printf("Aviso: A temperatura inserida está fora da faixa esperada.\n");
        }
        
        temps[i] = (signed char)temp_leitura;
    }

    for (i = 0; i < QTD_TEMPERATURAS; i++) {
        soma += temps[i];
    }
    
    media = (float)soma / QTD_TEMPERATURAS;

    for (i = 0; i < QTD_TEMPERATURAS; i++) {
        if (temps[i] > media) {
            contador_acima_media++;
        }
    }

    printf("\n---------------------------------------\n");
    printf("A media das temperaturas e: %.2f\n", media);
    printf("Quantidade de leituras acima da media: %d\n", contador_acima_media);
    printf("---------------------------------------\n");

    
}