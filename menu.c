#include <stdio.h>
#include "menu.h"

void mostrarMenu() {
    printf("\n");
    printf("╔══════════════════════════════════════╗\n");
    printf("║      DESPACHO DE INVESTIGACIONES     ║\n");
    printf("╠══════════════════════════════════════╣\n");
    printf("║  1) Iniciar juego                    ║\n");
    printf("║  2) Revisar expediente (Stats)       ║\n");
    printf("║  3) Revisar pertenencias             ║\n");
    printf("║  4) Cerrar el despacho               ║\n");
    printf("╚══════════════════════════════════════╝\n");
    printf("  Selecciona una opción: ");
}

void procesarOpcion(int opcion) {

    switch(opcion) {

        case 1:
            iniciarJuego();
            ;      
            break;

        case 2:
            mostrarStats();      
            break;

        case 3:
            mostrarInventario(); 
            break;

        case 4:
            printf("\nSaliendo del juego...\n");
            break;

        default:
            printf("\nOpción no válida. Intenta otra vez.\n\n");
            break;
    }
}

void elegirObjetoInicial(){

printf("╔══════════════════════════════════════════════════════════════════╗\n");
printf("║                        OBJETOS DISPONIBLES                       ║\n");
printf("╠══════════════════════════════════════════════════════════════════╣\n");
printf("║  Nº  │        OBJETO        │  Suerte  │ Percepción │  Sigilo   ║\n");
printf("╠══════╪══════════════════════╪══════════╪════════════╪═══════════╣\n");
printf("║  1   │ Billete de $30 MXN   │   x2.2   │    x1.0    │    x1.0   ║\n");
printf("║  2   │ Reloj de bolsillo    │  x0.95   │    x1.5    │    x1.2   ║\n");
printf("║  3   │ Libreta de notas     │   x1.0   │    x2.0    │   x0.95   ║\n");
printf("║  4   │ Mini radio           │   x1.3   │    x1.2    │    x0.9   ║\n");
printf("╠══════╧══════════════════════╧══════════╧════════════╧═══════════╣\n");
printf("║ Selecciona un objeto inicial (1-4):                              ║\n");
printf("╚══════════════════════════════════════════════════════════════════╝\n");
    
}

void iniciarJuego() {
    printf("\n");
    printf("╔══════════════════════════════════════╗\n");
    printf("║        COMIENZA EL CASO...           ║\n");
    printf("╚══════════════════════════════════════╝\n\n");

    elegirObjetoInicial();

}
