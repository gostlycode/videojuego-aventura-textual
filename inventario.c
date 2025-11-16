#include <stdio.h>
#include <string.h>
#include "inventario.h"

Objeto inventario[5];
int cantidadObjetos = 0;

void agregarObjeto(Objeto obj) {
    if (cantidadObjetos < 5) {
        inventario[cantidadObjetos] = obj;
        cantidadObjetos++;
        printf("\n╔══════════════════════════╗\n");
        printf("║     OBJETO OBTENIDO      ║\n");
        printf("╠══════════════════════════╣\n");
        printf("║ %s                       ║\n", obj.nombre);
        printf("╚══════════════════════════╝\n\n");
    } else {
        printf("No puedes llevar más objetos.\n");
    }
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

void mostrarInventario() {
    printf("\n╔══════════════════════════╗\n");
    printf("║        INVENTARIO        ║\n");
    printf("╠══════════════════════════╣\n");

    if (cantidadObjetos == 0) {
        printf("║ (Vacío)                  ║\n");
    } else {
        for (int i = 0; i < cantidadObjetos; i++)
            printf("║ %s                       ║\n", inventario[i].nombre);
    }

    printf("╚══════════════════════════╝\n\n");
}
