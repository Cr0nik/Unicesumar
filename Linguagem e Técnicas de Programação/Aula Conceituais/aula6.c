#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int numero;
    printf("Digite o numero para fazer a consulta:");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        printf("PAR!");
    }
    else{
        printf("IMPAR!!");
    }
    return EXIT_SUCCESS;
}