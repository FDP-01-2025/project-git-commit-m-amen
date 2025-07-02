
#include <iostream>
#include <fstream> //this library helps import  .txt files
#include <cctype> // to lowercase some input from the user to minimize erros
#include "headerFiles/evidencia.h" // imports the header for evidence
#include "headerFiles/otherTxtFiles.h"
#include "headerFiles/nombre.h" // imports the header for player 
#include "headerFiles/portafolio.h" // imports the header for portfolio
#include "headerFiles/juego.h" //imports the header for all the played before the user gets asked what evidence they want
#include "headerFiles/evidenceSelector.h"
#include "headerFiles/estadoJuicio.h"

using namespace std;

int main()
{

preEvidenceShownGame();

EstadoJuicio estado;
selectEvidence(estado);


}

    


