
#include <iostream>
#include <fstream> //this library helps import  .txt files
#include <cctype> // to lowercase some input from the user to minimize erros
#include "headerFiles/evidencia.h" // imports the header for evidence
#include "headerFiles/otherTxtFiles.h"
#include "headerFiles/nombre.h" // imports the header for player 
#include "headerFiles/portafolio.h" // imports the header for portfolio
#include "headerFiles/juego.h" //imports the header for all the played before the user gets asked what evidence they want
using namespace std;

int main()
{
preEvidenceShownGame();
 pedirNombreEjemplo();
 excusaLlegarTarde();
 recogerEvidencia();




}


 //Aqui hacer un loop de evidencia que se pueden crear en un vector y que
 //a medida el juagador vaya seleccionando las evidencia del caso1 estas 
 //vayan desaparaciendo del menu.
 //guardar la seleccion de evidencia tal vez en otro vector, en el que se pueda acceder a cualquier rato 

 //hacer cada uno de estos para cada caso. Los casos estan en Notion

    


