#ifndef STATS_H
#define STATS_H

// ===== Declaración de variables globales (extern) =====
extern int vida;
extern int dinero;

extern int carisma;
extern int percepcion;
extern int sigilo;
extern int suerte;

// ===== Prototipos de funciones =====
void modificarVida(int n);
void modificarDinero(int n);

void modificarCarisma(int n);
void modificarPercepcion(int n);
void modificarSigilo(int n);
void modificarSuerte(int n);

int chequeoProbabilidad(int dificultad);

void mostrarStats();

#endif
