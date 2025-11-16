#ifndef INVENTARIO_H
#define INVENTARIO_H

// ======== DEFINICIÓN DEL OBJETO ========
typedef struct {
    char nombre[30];
    float multiplicadorSuerte;       
    float multiplicadorPercepcion;   
    float multiplicadorSigilo;       
    int desbloqueaRuta;              // 0 = no, 1 = sí
} Objeto;


// ======== VARIABLES GLOBALES ========
extern Objeto inventario[5];
extern int cantidadObjetos;


// ======== FUNCIONES DISPONIBLES ========
void agregarObjeto(Objeto obj);

float obtenerMultiplicadorTotalSuerte();
float obtenerMultiplicadorTotalPercepcion();
float obtenerMultiplicadorTotalSigilo();

int tieneObjetoQueDesbloquea();  
void mostrarInventario();

#endif
