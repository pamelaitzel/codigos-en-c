#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void calcularEdad(int anios_actuales, int meses_actuales, int dias_actuales, 
                  int anios_nacimiento, int meses_nacimiento, int dias_nacimiento, 
                  int *edad_anios, int *edad_meses, int *edad_dias) {
    if (dias_actuales < dias_nacimiento) {
        dias_actuales += 30;
        meses_actuales--;
    }
    if (meses_actuales < meses_nacimiento) {
        meses_actuales += 12;
        anios_actuales--;
    }
    *edad_anios = anios_actuales - anios_nacimiento;
    *edad_meses = meses_actuales - meses_nacimiento;
    *edad_dias = dias_actuales - dias_nacimiento;
}
int main() {
    clock_t start, end;
    double cpu_time_used;

    int anios_actuales, meses_actuales, dias_actuales;
    int anios_nacimiento, meses_nacimiento, dias_nacimiento;
    int edad_anios = 0, edad_meses = 0, edad_dias = 0;

    printf("Ingrese la fecha de nacimiento (años meses días): ");
    scanf("%d %d %d", &anios_nacimiento, &meses_nacimiento, &dias_nacimiento);
    printf("Ingrese la fecha actual (años meses días): ");
    scanf("%d %d %d", &anios_actuales, &meses_actuales, &dias_actuales);
    start = clock();
    calcularEdad(anios_actuales, meses_actuales, dias_actuales, anios_nacimiento, meses_nacimiento, dias_nacimiento, &edad_anios, &edad_meses, &edad_dias);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("La edad es: %d años, %d meses y %d días\n", edad_anios, edad_meses, edad_dias);
    printf("El tiempo de ejecución fue de %f segundos.\n", cpu_time_used);
    return 0;
}