

double calcularPotencia(double base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else if (exponente > 0) {
        return base * calcularPotencia(base, exponente - 1);
    } else {
        // Manejo de exponentes negativos
        return 1 / (base * calcularPotencia(base, -exponente - 1));
    }
}

int main() {
    double base;
    int exponente;

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    printf("%.2lf elevado a %d es: %.6lf\n", base, exponente, calcularPotencia(base, exponente));

    return 0;
}

