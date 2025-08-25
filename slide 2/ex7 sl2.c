#include<stdio.h>
void main (void){
int menortime;
int maiortime;
int time;
int i =1;
int vitorias;
int derrotas;
int empates;
int pontos;
int maiorponto=0;
int menorponto=999;


while (i<=20) {
    printf("digite o código do time: ");
    scanf("%d", &time);
    printf("digite quantas vitorias: ");
    scanf("%d", &vitorias);
    printf("digite quantos empates: ");
    scanf("%d", &empates);
    printf("digite quantas derrotas: ");
    scanf("%d", &derrotas);
    pontos = 3*(vitorias)+ empates;
    if(pontos>maiorponto){
        maiorponto=pontos;
        maiortime = time;   
    }
    if(pontos<menorponto){
        menorponto=pontos;
        menortime=time;
    }
    i+=1;
    }
printf("o maior time é: %d/n", maiortime);
printf("o menor time é: %d/n",menortime);
}
