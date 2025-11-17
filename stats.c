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
    system("cls");
    printf("\n╔══════════════════════════╗\n");
    printf("║     ESTADÍSTICAS         ║\n");
    printf("╠══════════════════════════╣\n");
    printf("║ Vida:        %-12d║\n", vida);
    printf("║ Dinero:      %-12d║\n", dinero);
    printf("║ Carisma:     %-12d║\n", carisma);
    printf("║ Percepción:  %-12d║\n", percepcion);
    printf("║ Sigilo:      %-12d║\n", sigilo);
    printf("║ Suerte:      %-12d║\n", suerte);
    printf("╚══════════════════════════╝\n\n");
    printf("\nPresiona Enter para volver al menú...");
getchar();
getchar(); // evita que el salto anterior se consuma
}


