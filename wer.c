

int main() {
    int n;
    double suma = 0;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    printf("Ingrese los números:\n");
    for (int i = 0; i < n; ++i) {
        double num;
        scanf("%lf", &num);
        suma += num;
    }

    double promedio = suma / n;
    printf("El promedio de los números es: %.2lf\n", promedio);

    return 0;
}


