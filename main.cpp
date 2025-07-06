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
#include "headerFiles/minigames.h"
#include "headerFiles/juicioQuestion.h"

using namespace std;

int main()
{
    
    pedirNombreEjemplo();// this funtion asks the user for its name 
    excuseBeingLate(); // promps cuestions why the user was late 
    evelynTakeArchive.showLongDialog(); // shows Victor's Files
    pickUpEvidence(); 
    refleccionAfterReadingFile.showLongDialog(); //Shows the user reflecting about just reading the files
    youHave2hrs.showShortDialog(); //more dialog of Evelyn
    looking4Victor.showLongDialog(); // this dialog shows the user looking for our client Victor
    askVictorsLife();   //Here the funtion of how Victor ended up in Jail will go
    victorRegretful.showLongDialog(); //this dialog shows how Regretful is Victor for the accused crimes he has commited
    menuEvidence(); //with this funtion, the user sees all the evidence and its dialog given by Victor
    EstadoJuicio estado;
    selectEvidence(estado);

    // PREGUNTAS CASO 1


    makeQuestionE1(); // EVIDENCIA 1 3 PREGUNTAS

    makeQuestionE2(); // EVIDENCIA 2 4 PREGUNTAS

    makeQuestionE3(); // EVIDENCIA 3 1 PREGUNTA

    makeQuestionE4(); // EVIDENCIA 4 3 PREGUNTAS

    makeQuestionE5(); // EVIDENCIA 5 1 PREGUNTA

    makeQuestionE6(); // EVIDENCIA 6 2

    pointsVeri(); // verificar puntos caso 1

    // PREGUNTAS CASO 2
    
    makeQuestionC2Q1_2(); // EVIDENCIA 4 SEGUN DOC 3 PREGUNTAS A 3 PREGUNTAS B

    makeQuestionC2Q3(); // EVIDENCIA 4 PREGUNTA #3 SEGUN DOC

    makeQuestionC2Q4(); // EVIDENCIA 4 PREGUNTA #4 SEGUN DOC

    makeQuestionC2Q1_E6(); // EVIDENCIA 5 SEGUN DOC 3 PREGUNTAS A 3 PREGUNTAS B

    makeQuestionC2Q2_E6(); // EVIDENCIA 5 PREGUNTA #4 SEGUN DOC

    makeQuestionC2Q3_E6(); // EVIDENCIA 5 PREGUNTA #5 SEGUN DOC

    makeQuestionC2Q4_E6(); // EVIDENCIA 5 PREGUNTA #6 SEGUN DOC

}



