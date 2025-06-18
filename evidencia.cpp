#include <iostream>
#include "evidencia.h"

void Evidencia::imprimir() {
    cout << "Nombre de Evidencia: " << nombreEvidencia << endl;
    cout << "Te tomara alrededor de " << tiempo << " el conseguir esta evidencia";
}
