#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("Entrada liberada!");
    }
    else{
        printf("Entrada negada.");
    }
}