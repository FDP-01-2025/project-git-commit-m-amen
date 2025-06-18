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
    string pregunta1;
    string pregunta2;
    string pregunta3;
    string pregunta4;
    string pregunta5;


    void imprimir(); 
};

#endif
