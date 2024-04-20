#include <stdio.h>

struct CD {
    char titulo[100];
    char artista[50];
    int num_canciones;
    int anio;
    float precio;
};

int main(void) {
    struct CD cd1;

    printf("Ingrese el título: ");
    fgets(cd1.titulo, sizeof(cd1.titulo), stdin);
    
    printf("Ingrese el artista: ");
    fgets(cd1.artista, sizeof(cd1.artista), stdin);
    
    printf("Ingrese el número de canciones: ");
    scanf("%d", &cd1.num_canciones);
    
    printf("Ingrese el año: ");
    scanf("%d", &cd1.anio);
    
    printf("Ingrese el precio: ");
    scanf("%f", &cd1.precio);
    printf("\nDatos del CD:\n");
    printf("Título: %s", cd1.titulo);
    printf("Artista: %s", cd1.artista);
    printf("Número de canciones: %d\n", cd1.num_canciones);
    printf("Año: %d\n", cd1.anio);
    printf("Precio: %.2f\n", cd1.precio);

    return 0;
}