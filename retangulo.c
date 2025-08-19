#ifndef retangulo_c
#define retangulo_c

typedef struct Retangulo {
    float altura;
    float base;
} Retangulo;

void inicializarRetangulo(Retangulo *retangulo, float base, float altura) {
    retangulo->altura = altura;
    retangulo->base = base;
}

float calcularArea(Retangulo *retangulo) {
    return retangulo->altura * retangulo->base;
}

float calcularPerimetro(Retangulo *retangulo) {
    return 2 * (retangulo->altura + retangulo->base);
}

#endif
