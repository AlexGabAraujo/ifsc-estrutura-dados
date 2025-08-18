#include <stdio.h>

typedef struct Retangulo{
    float altura;
    float base;
}Retangulo;

void inicializarRetangulo(Retangulo *retangulo, float base, float altura){
    (*retangulo).altura = altura;
    (*retangulo).base = base;
}

float calcularArea(Retangulo *retangulo){
    return (*retangulo).altura * (*retangulo).base;
}

float calcularPerimetro(Retangulo *retangulo){
    return 2 * ((*retangulo).altura + (*retangulo).base);
}

int main()
{

    Retangulo retangulo;
    float altura;
    float base;

    printf("Digite a altura do retangulo:");
    scanf("%f", &altura);

    printf("Digite a base do retangulo:");
    scanf("%f", &base);

    inicializarRetangulo(&retangulo, base, altura);

    printf("\n-------Informacoes do Retangulo-------");
    printf("\nArea do retangulo: %.2f", calcularArea(&retangulo));
    printf("\nPerimetro do retangulo: %.2f\n\n", calcularPerimetro(&retangulo));


    return 0;
}
