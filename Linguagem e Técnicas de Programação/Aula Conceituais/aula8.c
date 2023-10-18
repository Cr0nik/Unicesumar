#include <stdio.h>
#include <stdlib.h>

void main(){
    int escolha;
    printf("Digite a sua escolha:\n[1]: Abrir conta.\n[2]: Caixa.\n[3]: Gerente PF.\n[4]: Gerente PJ.\n:");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("Conta aberta!");
        break;
    case 2:
        printf("Valor do caixa: 927197.");
        break;
    case 3:
        printf("Estamos contatando o gerente PF.");
        break;
    case 4:
        printf("Estamos contatando o gerente PJ.");
        break;
    default:
        printf("Valor invalido!!");
    }
}