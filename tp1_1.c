#include <stdio.h>

int main() {

    printf("Hola mundo");

    int *p, entero=5;

    p = &entero;

    //Mostrar el contenido del puntero
    printf("\nContenido del puntero: %d\n", *p);

    //Mostrar la direccion de memoria de la variable
    printf("Direccion de memoria de la variable: %d\n", &entero);

    //Mostrar la direccion de memoria del puntero
    printf("Direccion de memoria del puntero: %d\n", &p);

    return 0;
}