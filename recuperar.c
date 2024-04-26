#include <stdio.h>
#include <stdlib.h>
#include <gio/gio.h>

int main() {
    // Nombre del archivo a recuperar
    const char* nombreArchivo = "archivo.txt";

    // Crear una conexión con la papelera de reciclaje
    GError *error = NULL;
    GFile *papelera = g_file_new_for_uri("trash:///");
    GFile *archivo = g_file_new_for_path(nombreArchivo);

    // Mover el archivo de la papelera de reciclaje al directorio original
    if (g_file_move(archivo, papelera, G_FILE_COPY_NONE, NULL, NULL, NULL, &error)) {
        printf("El archivo %s fue recuperado correctamente.\n", nombreArchivo);
    } else {
        printf("No se pudo recuperar el archivo %s de la papelera de reciclaje: %s\n", nombreArchivo, error->message);
        g_error_free(error);
    }

    g_object_unref(papelera);
    g_object_unref(archivo);

    return 0;
}