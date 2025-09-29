#include <stdio.h>

enum Dia {
    Dom,
    Seg,
    Ter,
    Qua,
    Qui,
    Sex,
    Sab
};

char* nome(enum Dia dia) {
    switch (dia) {
        case Dom:
            return "Domingo";
        case Seg:
            return "Segunda";
        case Ter:
            return "Terça";
        case Qua:
            return "Quarta";
        case Qui:
            return "Quinta";
        case Sex:
            return "Sexta";
        case Sab:
            return "Sábado";
        default:
            return "Dia inválido";
    }
}

int main() {
    printf("%s\n", nome(Sab));

    return 0;
}