#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    int opcao;
    int atendimentos = 0;
    int registrados = 0;
    int setor = 0;
    char abertura[999];
    char gerente[999];
    char cpf[999];
    char nome[999];


    printf("Bem vindo ao sistema de atendimento!!");
    printf("Digite uma das opções:");
    
    do
    {
        printf("1 - Solicitar atendimento");
        printf("2 - Listar Atendimentos Registrado");
        printf("3 - Listar Atendimentos por setor");
        printf("4 - Sair");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Solicitando atendimento...\n");
            printf("Precione qualquer tecla para continuar...\n");
            system("pause");
            printf("Digite o seu nome:\n");
            scanf("%s", &nome);
            fflush(stdin);
            break;
        
        case 2:
            printf("Listar Atendimentos Registrado.\n");
            break;
        case 3:
            printf(" Listar Atendimentos por setor.\n");
            break;
        
        default:
            printf("Opção inválida, digite a opção novamente!\n");
            break;
        }
        
    } while ((opcao != 4));
    
   return 0;
}