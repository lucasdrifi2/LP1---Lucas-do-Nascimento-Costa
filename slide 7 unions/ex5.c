#include<stdio.h>

struct animal{
    int tipo;
    union{
        struct {
            int patas;
            int espessura;
            char cauda[5];
        }anfibio;
    
        struct {
            int bico;
            char autonomia[5];
            int canto;
        }ave;
    
        struct {
            char venenoso[5];
            char autonomia2[5];
            int ovos;
        }repitil;
    
        struct {
            int dente;
            int volume;
            int velocidade;
        }mamifero;
    };
    
};

int main(){

    struct animal a1= {0, .anfibio = {4,5,"sim"}};
    struct animal a2= {2, .repitil = { "sim ", "nao",5}};
    struct animal a3= {2, .repitil = { "nao", "nao",2}};
    struct animal a4= {0, .mamifero = {22,17,40}};
    struct animal a5= {0, .mamifero = {10,10,33}};
    struct animal a6= {0, .anfibio = {4,5,"sim"}};



    printf("Tipo: Anfibio, Patas %d, espessura %d, cauda %s\n", a1.anfibio.patas,a1.anfibio.espessura,a1.anfibio.cauda);
    printf("Tipo: repitil, venenoso %s, autonomia %s, ovos %d\n", a2.repitil.venenoso, a2.repitil.autonomia2,a2.repitil.ovos);
    printf("Tipo: repitil, venenoso %s, autonomia %s, ovos %d", a3.repitil.venenoso, a3.repitil.autonomia2,a3.repitil.ovos);

    return 0;
}
