#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100];
    char cpf[15];
    int escolha;
    int atendimento;

    printf("Digite o seu nome para darmos início ao atendimento: ");
    scanf("%s", nome); 

    printf("Digite o seu CPF, no modelo: 999.999.999-99: ");
    fflush(stdin);
    scanf(" %14s", cpf);

    printf("Digite a sua escolha:\n[1]: Solicitar Atendimento.\n[2]: Listar Atendimentos Registrados.\n[3]: Listar Atendimento por Setor.\n[4]: Sair: \n:");
    fflush(stdin);
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Solicitando atendimento...");
            break;
        case 2:
            printf("Atendimentos disponíveis:\n");
            printf("Digite o atendimento de sua preferência:\n[1]: Abrir conta.\n[2]: Caixa.\n[3]: Gerente PF.\n[4]: Gerente PJ.\n: ");
            scanf("%d", &atendimento);          
                if(atendimento == 1){
                    printf("Nome: %s\n", nome);
                    printf("CPF: %s\n", cpf);
                    printf("Tipo Atendimento - %d - Abrir conta.\n", atendimento);
                    printf("===============================\n");
                }
                else if (atendimento == 2)
                {
                    printf("Nome: %s\n", nome);
                    printf("CPF: %s\n", cpf);
                    printf("Tipo Atendimento - %d - Caixa.\n", atendimento);
                    printf("===============================\n");
                }
                else if (atendimento == 3)
                {
                    printf("Nome: %s\n", nome);
                    printf("CPF: %s\n", cpf);
                    printf("Tipo Atendimento - %d - Gerente PF.\n", atendimento);
                    printf("===============================\n");
                }
                else if (atendimento == 4)
                {
                    printf("Nome: %s\n", nome);
                    printf("CPF: %s\n", cpf);
                    printf("Tipo Atendimento - %d - Gerente PJ.\n", atendimento);
                    printf("===============================\n");
                }
            break;
        default:
            break;
    }

    return 0;
}
