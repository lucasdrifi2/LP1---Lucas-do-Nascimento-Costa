#include <stdio.h>

void main (void) {
    int velocidade_mp;
    

    printf("Digite o valor da velocidade do carro em MPh:");
    scanf("%d", &velocidade_mp);
    
    int velocidade_km = velocidade_mp * 1.6;
    if (velocidade_km < 80){

        printf("Voce deve Acelerar:""%d""KM/h\n", velocidade_km);
    }
    if (velocidade_km >= 80 && velocidade_km <100 ){

        printf("Voce deve Manter:""%d""KM/h\n", velocidade_km);
    }
    if (velocidade_km >= 100){

        printf("Voce deve Desacelerar:""%d""KM/h\n", velocidade_km);
    }

}