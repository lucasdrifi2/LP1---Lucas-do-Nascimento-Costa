#include <stdio.h>

int tamanho(char* str) {
    int contador = 0;
    while (str[contador] != '\0') {
        contador++;
    }
    return contador;
}

void concatena(char* d, char* o1, char* o2) {
    int i = 0;
    int j = 0;
    
    while (o1[i] != '\0') {
        d[i] = o1[i];
        i++;
    }
    
    while (o2[j] != '\0') {
        d[i + j] = o2[j];
        j++;
    }
    
    d[i + j] = '\0';
}

int main() {
    char destino[100]; 
    char origem1[100];
    char origem2[100];
    printf("Digite um String:");
    scanf("%s", origem1);
    printf("Digite um String:");
    scanf("%s", origem2);
    
    concatena(destino, origem1, origem2);
    
    printf("String de destino: %s\n", destino);
    
    return 0;
}