#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &x);
    
    int *arreglo = (int *)malloc(x * sizeof(int));
    
    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }
    

    printf("Ingresa los elementos del arreglo:\n");
    for (int i = 0; i < x; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arreglo + i);
    }
    
    printf("Los valores del arreglo son:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", *(arreglo + i));
    }
    printf("\n");
    
    free(arreglo);
    
    return 0;
}