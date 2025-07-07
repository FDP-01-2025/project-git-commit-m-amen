#include "headerFiles/evidenceSelect.h"
#include "headerFiles/evidencia.h"
#include "headerFiles/otherTxtFiles.h"

using namespace std;

void menuEvidence(){
    int optionEvidencia;
    char confirm;

    cout << "\nVictor: ";
    do{
    cout << "Cual Evidencia quieres escuchar? 1-6  \n";
    cin >> optionEvidencia;

    switch (optionEvidencia){
case 1:
    cout << C1E1.nombreEvidencia << endl;
    C1E1.imprimir();
    break;

case 2:
    cout << C1E2.nombreEvidencia << endl;
    C1E2.imprimir();
    break;

case 3: 
    cout << C1E3.nombreEvidencia << endl; 
    C1E3.imprimir();    
    break;

case 4: 
    cout << C1E4.nombreEvidencia << endl;
    C1E4.imprimir();
    break;

case 5:
    cout << C1E5.nombreEvidencia << endl;
    C1E5.imprimir();
    break;

case 6:
    cout << C1E6.nombreEvidencia << endl;
    C1E6.imprimir();
    break;
    
    default:
    cout << "Opción invalida. Elige una opción entre 1-6. \n";
    }

    cout << "Presiona X para volver a las evidencias o cualquier otra tecla para salir de las evidencias: \n";
    cin >> confirm;
    confirm = tolower (confirm);
}   
    while (confirm == 'x');

}