#ifndef evidencia_h
#define evidencia_h

#include <iostream>
#include <string>
using namespace std;

struct Evidencia{
string nombreEvidencia;
    int puntosPosibles;
    int puntosMoralidad;
    int tiempo;
    string txtfileEvidencia;
    string pregunta1, pregunta2, pregunta3, pregunta4, pregunta5, pregunta6;
    void imprimir(); 
};



extern Evidencia C1E1, C1E2, C1E3, C1E4, C1E5, C1E6; 

#endif
