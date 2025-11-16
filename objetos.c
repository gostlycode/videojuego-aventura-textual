#include <string.h>
#include "objetos.h"

// ======== DEFINICIÓN REAL DE OBJETOS ========
Objeto camara;
Objeto sombrero;
Objeto billeteSuerte;
Objeto mapa;
Objeto grabadora;
Objeto lentes;
Objeto reloj;
Objeto gafeteFalso;
Objeto radio;
Objeto libreta;


// ======== INICIALIZACIÓN ========
void inicializarObjetos() {

    // CAMARA
    strcpy(camara.nombre, "Camara");
    camara.multiplicadorSuerte = 1;
    camara.multiplicadorPercepcion = 1.2;
    camara.multiplicadorSigilo = 0.8;
    camara.desbloqueaRuta = 0;

    // SOMBRERO
    strcpy(sombrero.nombre, "Sombrero");
    sombrero.multiplicadorSuerte = 1.5;
    sombrero.multiplicadorPercepcion = 1;
    sombrero.multiplicadorSigilo = 1;
    sombrero.desbloqueaRuta = 0;

    strcpy(billeteSuerte.nombre, "Billete de $30mxn");
    billeteSuerte.multiplicadorSuerte = 2.2;
    billeteSuerte.multiplicadorPercepcion = 1;
    billeteSuerte.multiplicadorSigilo = 1;
    billeteSuerte.desbloqueaRuta = 0;

    strcpy(mapa.nombre, "Mapa del metro");
    mapa.multiplicadorSuerte = 1;
    mapa.multiplicadorPercepcion = 1;
    mapa.multiplicadorSigilo = 1;
    mapa.desbloqueaRuta = 1;

    strcpy(grabadora.nombre, "Grabadora de audio");
    grabadora.multiplicadorSuerte = 1.2;
    grabadora.multiplicadorPercepcion = 1.2;
    grabadora.multiplicadorSigilo = 0.8;
    grabadora.desbloqueaRuta = 0;

    strcpy(lentes.nombre, "Lentes de detective");
    lentes.multiplicadorSuerte = 0.9;
    lentes.multiplicadorPercepcion = 1.5;
    lentes.multiplicadorSigilo = 1.5;
    lentes.desbloqueaRuta = 0;

    strcpy(reloj.nombre, "Reloj de bolsillo");
    reloj.multiplicadorSuerte = 0.95;
    reloj.multiplicadorPercepcion = 1.5;
    reloj.multiplicadorSigilo = 1.2;
    reloj.desbloqueaRuta = 0;

    strcpy(gafeteFalso.nombre, "Gafete falso");
    gafeteFalso.multiplicadorSuerte = 1;
    gafeteFalso.multiplicadorPercepcion = 1;
    gafeteFalso.multiplicadorSigilo = 0.9;
    gafeteFalso.desbloqueaRuta = 1;

    strcpy(radio.nombre, "Mini radio");
    radio.multiplicadorSuerte = 1.3;
    radio.multiplicadorPercepcion = 1.2;
    radio.multiplicadorSigilo = 0.9;
    radio.desbloqueaRuta = 0;

    strcpy(libreta.nombre, "Libreta de notas");
    libreta.multiplicadorSuerte = 1;
    libreta.multiplicadorPercepcion = 2;
    libreta.multiplicadorSigilo = 0.95;
    libreta.desbloqueaRuta = 0;

}
