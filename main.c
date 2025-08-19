#include <stdio.h>
#include "retangulo.c"

int main() {
    int opcao;
    do {
        printf("-------------MENU-------------\n");
        printf("Digite qual quest�o deseja rodar (1-3) ou 0 para sair:\n");
        scanf("%d", &opcao);
        printf("\n------------------------------\n\n");

        switch(opcao) {
            case 1: {
                Retangulo retangulo;
                float altura, base;

                printf("Digite a altura do ret�ngulo: ");
                scanf("%f", &altura);
                printf("Digite a base do ret�ngulo: ");
                scanf("%f", &base);

                inicializarRetangulo(&retangulo, base, altura);

                printf("\n-------Informa��es do Ret�ngulo-------");
                printf("\n�rea do ret�ngulo: %.2f", calcularArea(&retangulo));
                printf("\nPer�metro do ret�ngulo: %.2f\n\n", calcularPerimetro(&retangulo));

                break;
            }
            case 2:
                printf("Op��o 2 em desenvolvimento...\n\n");
                break;
            case 0:
                printf("\nFinalizando...\n\n");
                break;
            default:
                printf("Valor inv�lido. Tente novamente.\n\n");
                break;
        }
    } while(opcao != 0);

    return 0;
}
