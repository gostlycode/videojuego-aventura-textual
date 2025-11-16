#include <stdio.h>
#include <stdlib.h>
#include "inventario.h"
#include "stats.h"

// ======== DEFINICIÓN DE VARIABLES GLOBALES ========

int vida = 3;
int dinero = 300;

int carisma = 2;
int percepcion = 2;
int sigilo = 2;
int suerte = 1;


//---------------------ModificacionDineroVida----------------

// Vida y dinero
void modificarVida(int n) {
    vida += n;
    if (vida < 0) vida = 0;  // Evita negativos
}

void modificarDinero(int n) {
    dinero += n;
}


//---------------------ModificacionStats----------------

void modificarCarisma(int n) { carisma += n; }
void modificarPercepcion(int n) { percepcion += n; }
void modificarSigilo(int n) { sigilo += n; }
void modificarSuerte(int n) { suerte += n; }

//---------------------Probabilidad----------------

int chequeoProbabilidad(int dificultad) {

    int modificadorBase = suerte * 15;
    int tirada = (rand() % 100) + 1;

    // Multiplicadores del inventario
    float mSuerte = obtenerMultiplicadorTotalSuerte();

    int resultadoFinal = tirada + modificadorBase;
    resultadoFinal *= mSuerte; // se vuelve más fuerte con objetos

    if (resultadoFinal >= dificultad)
        return 1;
    else
        return 0;
}

//---------------------MostrarStats----------------

void mostrarStats() {
    printf("\n╔══════════════════════════╗\n");
    printf("║     ESTADÍSTICAS         ║\n");
    printf("╠══════════════════════════╣\n");
    printf("║ Vida:       %d            ║\n", vida);
    printf("║ Dinero:     %d            ║\n", dinero);
    printf("║ Carisma:    %d            ║\n", carisma);
    printf("║ Percepción: %d            ║\n", percepcion);
    printf("║ Sigilo:     %d            ║\n", sigilo);
    printf("║ Suerte:     %d            ║\n", suerte);
    printf("╚══════════════════════════╝\n\n");
}

