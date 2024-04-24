include <stdio.h>

void tablaMultiplicar(int numero, int multiplicador) {
    if(multiplicador <= 10) {
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        tablaMultiplicar(numero, multiplicador + 1);
    }
}

void generarTablas(int numero) {
    if(numero <= 100) {
        printf("Tabla de multiplicar del %d:\n", numero);
        tablaMultiplicar(numero, 1);
        printf("\n");
        generarTablas(numero + 1);
    }
}

int main() {
    generarTablas(1);
    return 0;
}