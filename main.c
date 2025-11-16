#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "menu.h"

int main() {
    system("chcp 65001 > nul");   // Cambia a UTF-8 sin mostrar texto
    system("cls");                // Limpia pantalla después del cambio
    int opcion;

    srand(time(NULL));       // random inicializado
    inicializarObjetos();    // carga tus objetos

    do {
        mostrarMenu();
        scanf("%d", &opcion);
        procesarOpcion(opcion);

    } while(opcion != 4);

    return 0;
}
