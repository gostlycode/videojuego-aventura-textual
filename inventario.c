#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "inventario.h"

Objeto inventario[5];
int cantidadObjetos = 0;

void imprimirFilaObjeto(const char *nombre) {
    int anchoTotal = 25; // espacio útil entre las barras
    int largo = strlen(nombre);
    int padding = anchoTotal - largo;

    printf("║ %s", nombre);

    // rellena con espacios
    for (int i = 0; i < padding; i++) {
        printf(" ");
    }

    printf("║\n");
}


void agregarObjeto(Objeto obj) {
    if (cantidadObjetos < 5) {
        inventario[cantidadObjetos] = obj;
        cantidadObjetos++;
        system("cls");
        printf("\n╔══════════════════════════╗\n");
        printf("║     OBJETO OBTENIDO      ║\n");
        printf("╠══════════════════════════╣\n");
        imprimirFilaObjeto(obj.nombre);
        printf("╚══════════════════════════╝\n\n");
    } else {
        printf("No puedes llevar más objetos.\n");
    }
    printf("\nPresiona Enter para volver al menú...");
    getchar();
    getchar(); // evita que el salto anterior se consuma

}

float obtenerMultiplicadorTotalSuerte() {
    float total = 1.0f;
    for (int i = 0; i < cantidadObjetos; i++)
        total *= inventario[i].multiplicadorSuerte;
    return total;
}

float obtenerMultiplicadorTotalPercepcion() {
    float total = 1.0f;
    for (int i = 0; i < cantidadObjetos; i++)
        total *= inventario[i].multiplicadorPercepcion;
    return total;
}

float obtenerMultiplicadorTotalSigilo() {
    float total = 1.0f;
    for (int i = 0; i < cantidadObjetos; i++)
        total *= inventario[i].multiplicadorSigilo;
    return total;
}

int tieneObjetoQueDesbloquea() {
    for (int i = 0; i < cantidadObjetos; i++)
        if (inventario[i].desbloqueaRuta == 1)
            return 1;
    return 0;
}


void imprimirFilaInventario(const char *nombre) {
    const int anchoInterno = 25;  // ancho entre los bordes
    int len = strlen(nombre);
    int espacios = anchoInterno - 2 - len; // 2 = "• "

    if (espacios < 0) espacios = 0; // por si el nombre es largo

    printf("║ • %s", nombre);

    for (int i = 0; i < espacios; i++)
        printf(" ");

    printf("║\n");
}


void mostrarInventario() {
    system("cls");
    printf("\n╔══════════════════════════╗\n");
    printf("║        INVENTARIO        ║\n");
    printf("╠══════════════════════════╣\n");

    if (cantidadObjetos == 0) {
        printf("║ (Vacío)                  ║\n");
    } else {
        for (int i = 0; i < cantidadObjetos; i++) {
        imprimirFilaInventario(inventario[i].nombre);
    }
    }

    printf("╚══════════════════════════╝\n\n");
    printf("\nPresiona Enter para volver al menú...");
    getchar();
    getchar(); // evita que el salto anterior se consuma

  
}


