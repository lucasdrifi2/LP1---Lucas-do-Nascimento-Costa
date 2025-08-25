#include <stdio.h>

void main (void) {
    int n1;
    int n2;
    int i;
    printf("Digite um valor para n1:");
    scanf("%d",&n1);
    printf("Digite um valor para n2:");
    scanf("%d",&n2);
    for (i=n1;n1 <n2-1;i++,n1++){
  	printf("%d",i+1);
    }
}