#include <stdio.h>

int main() {
    FILE *papelera;
    char nombreArchivo[50];
    
    printf("Ingrese el nombre del archivo que desea eliminar de la papelera de reciclaje: ");
    scanf("%s", nombreArchivo);
    
    papelera = fopen(nombreArchivo, "r");
    
    if (papelera == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    
    fclose(papelera);
    
    if (remove(nombreArchivo) == 0) {
        printf("El archivo %s fue eliminado correctamente de la papelera de reciclaje.\n", nombreArchivo);
    } else {
        printf("No se pudo eliminar el archivo %s de la papelera de reciclaje.\n", nombreArchivo);
    }
    
    return 0;
}