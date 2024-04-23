#include <stdio.h>
struct Fraccion {
    int numerador;
    int denominador;
};
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void simplificarFraccion(struct Fraccion *fraccion) {
    int divisor = mcd(fraccion->numerador, fraccion->denominador);
    fraccion->numerador /= divisor;
    fraccion->denominador /= divisor;
}
struct Fraccion sumaFracciones(struct Fraccion fraccion1, struct Fraccion fraccion2) {
    struct Fraccion resultado;
    resultado.numerador = fraccion1.numerador * fraccion2.denominador + fraccion2.numerador * fraccion1.denominador;
    resultado.denominador = fraccion1.denominador * fraccion2.denominador;
    simplificarFraccion(&resultado);
    return resultado;
}
struct Fraccion restaFracciones(struct Fraccion fraccion1, struct Fraccion fraccion2) {
    struct Fraccion resultado;
    resultado.numerador = fraccion1.numerador * fraccion2.denominador - fraccion2.numerador * fraccion1.denominador;
    resultado.denominador = fraccion1.denominador * fraccion2.denominador;
    simplificarFraccion(&resultado);
    return resultado;
}
struct Fraccion divisionFracciones(struct Fraccion fraccion1, struct Fraccion fraccion2) {
    struct Fraccion resultado;
    resultado.numerador = fraccion1.numerador * fraccion2.denominador;
    resultado.denominador = fraccion1.denominador * fraccion2.numerador;
    simplificarFraccion(&resultado);
    return resultado;
}
void imprimirFraccion(struct Fraccion fraccion) {
    printf("%d/%d", fraccion.numerador, fraccion.denominador);
}
int main() {
    struct Fraccion fraccion1, fraccion2, resultado;
    printf("Ingrese la primera fraccion (numerador/denominador): ");
    scanf("%d/%d", &fraccion1.numerador, &fraccion1.denominador);
printf("Ingrese la segunda fraccion (numerador/denominador): ");
    scanf("%d/%d", &fraccion2.numerador, &fraccion2.denominador);
    resultado = sumaFracciones(fraccion1, fraccion2);
    printf("\nLa suma de las fracciones es: ");
    imprimirFraccion(resultado);
    resultado = restaFracciones(fraccion1, fraccion2);
    printf("\nLa resta de las fracciones es: ");
    imprimirFraccion(resultado);
    resultado = divisionFracciones(fraccion1, fraccion2);
    printf("\nLa división de las fracciones es: ");
    imprimirFraccion(resultado);
    
    printf("\n");

    return 0;
}