#include <iostream>
#include "headerFiles/evidencia.h"
#include <fstream> // es la libreria que permite trabajar con archivos



void Evidencia::imprimir() {
    cout << "Nombre de Evidencia: " << nombreEvidencia << endl;
    cout << "Te tomara alrededor de " << tiempo << " dias el conseguir esta evidencia\n\n\n";

    ifstream archivoReader(txtfileEvidencia);
    if(!archivoReader.is_open()){
        cerr << "Error al abrir archivo: " << txtfileEvidencia << endl;
        return;

    }
    string linea; 
    while(getline(archivoReader, linea)){
        cout << linea <<endl;
    }
    archivoReader.close();
}



Evidencia C1E1 = {"Nombre de la evidencia: No status de la creatura", 3,2,6, "textFiles/case1Evidence1.txt", "PreguntaFiscal1", "PreguntaFiscal2","PreguntaFiscal3","PreguntaFiscal4","PreguntaFiscal5",};
Evidencia C1E2 = {"Nombre de la evidencia: Testimonio de la creatura", 4, 1, 8, "textFiles/case1Evidence2.txt", "prosecutorQuestions/case1/c1e2q1.txt", "prosecutorQuestions/case1/c1e2q2.txt ","prosecutorQuestions/case1/c1e2q3.txt"} ;
Evidencia C1E3 = {"Nombre de la evidencia: Propio Testimonio de la Victima", 1, 4, 2, "textFiles/case1Evidence3.txt"};
Evidencia C1E4 = {"Nombre de la evidencia: Diario de Victor", 3, 2, 6, "textFiles/case1Evidence4.txt"};
Evidencia C1E5 = {"Nombre de la evidencia: Testimonio de Padre Vander", 1, 4, 2, "textFiles/case1Evidence5.txt"};
Evidencia C1E6 = {" Nombre de la evidencia: Argumento bien comun", 3, 3, 4, "textFiles/case1Evidence6.txt"};

Evidencia C2E1 = {"Nombre de la evidencia: Testimonio Padre SJ", 4,1,8};
Evidencia C2E2 = {"Nombre de la evidencia: Texto de Gottfried Wilhelm", 3,2,6};
Evidencia C2E3 = {"Nombre de la evidencia: Testimonio de Cientifico", 4,1,8};
Evidencia C2E4 = {"Nombre de la evidencia: Leyes inmorales pasadas", 3, 2, 6};
Evidencia C2E5 = {"Nombre de la evidencia: Personas Previamente Acusadas por la Iglesia", 3, 2, 6 };
Evidencia C2E6 = {"Nombre de la evidencia: Investigar Fiscal", 6, -1, 12};

Evidencia C3E1 = {"Nombre de la evidencia: "};
Evidencia C3E2 = {"Nombre de la evidencia: "};
Evidencia C3E3 = {"Nombre de la evidencia: "};
Evidencia C3E4 = {"Nombre de la evidencia: "};
Evidencia C3E5 = {"Nombre de la evidencia: "};
Evidencia C3E6 = {"Nombre de la evidencia: "};