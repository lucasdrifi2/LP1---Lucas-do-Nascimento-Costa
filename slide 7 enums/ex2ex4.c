#include<stdio.h>

enum Moeda {
    REAL = 0,
    DOLAR = 1,
    EURO = 2
};

struct preco{
    enum Moeda tipo;
    union{
        float real;
        float dolar;
        float euro;
    }valor;
};

void exibe(struct preco p){
    if(p.tipo == REAL){
        printf("O preço é R$ %.2f\n", p.valor.real);
    } else if(p.tipo == DOLAR){
        printf("O preço é $ %.2f\n", p.valor.dolar);
    } else if(p.tipo == EURO){
        printf("O preço é € %.2f\n", p.valor.euro);
    }
}

struct preco altera(struct preco p, enum Moeda t){
    float novovalor;
    
    if(p.tipo == REAL){
        novovalor = p.valor.real;
    } else if(p.tipo == DOLAR){
        novovalor = (p.valor.dolar) * 5.28;
    } else if(p.tipo == EURO){
        novovalor = (p.valor.euro) * 6.24;
    } else {
        return p;
    }
    
    p.tipo = t;
    
    if(p.tipo == REAL){
        p.valor.real = novovalor;
    } else if(p.tipo == DOLAR){
        p.valor.dolar = novovalor / 5.28;
    } else if(p.tipo == EURO){
        p.valor.euro = novovalor / 6.24;
    }
    
    return p;    
}

int main(){
    struct preco p1 = {EURO, 54.00};
    
    printf("Preço original: ");
    exibe(p1);
    
    p1 = altera(p1, REAL);
    
    printf("Preço alterado: ");
    exibe(p1);
    
    return 0;
}