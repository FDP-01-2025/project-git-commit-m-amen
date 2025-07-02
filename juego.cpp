#include <iostream>
#include <vector>
#include "headerFiles/juego.h"
#include "headerFiles/evidencia.h"
#include <fstream> //this library helps import  .txt files
#include <cctype> // to lowercase some input from the user to minimize erros
#include "headerFiles/evidencia.h" // imports the header for evidence
#include "headerFiles/otherTxtFiles.h"
#include "headerFiles/nombre.h" // imports the header for player 
#include "headerFiles/portafolio.h" // imports the header for portfolio

using namespace std; 
void askVictorsLife (){  // for this function we will stored the loop on how Victor ended up in Jail
    char Opiton; 
    bool askedA = false, askedB = false, askedC = false;

    while (!(askedA && askedB && askedC))
    {
       cout << "Que te gustaria saber de Victor?\n";
       if (!askedA) cout << "\na).Cuentame un poco de tu infancia\n";
       if (!askedB) cout << "b).Cuentame Victor, Como hiciste la creatura\n";
       if (!askedC) cout << "c). Como terminaste en la carcel?\n ";
       cin >> Opiton;
       Opiton = tolower(Opiton);

       if (Opiton == 'a'){
        if(!askedA){
        victorChildhodd.showLongDialog();
        askedA = true;
        }else {cout << "Victor: "<< endl;
         cout << "   Ya preguntaste eso amigo.... Pregunta otra cosa" << endl;}
       } 
       else if (Opiton == 'b')
       {
        if (!askedB)
        {
            victorMakingofCreature.showLongDialog();
            askedB = true; 
        }else {cout << "Victor: "<< endl;
         cout << "   Ya preguntaste eso amigo.... Pregunta otra cosa" << endl;}
       }   
       else if (Opiton == 'c'){
        if (!askedC){
            victorHowCarcel.showLongDialog();
            askedC= true;
        }else {cout << "\nVictor: "<< endl;
         cout << "   Ya preguntaste eso amigo.... Pregunta otra cosa\n" << endl;}
       }
       else {cout << "\n Opción inválida. Escoge una de las literales";} 
    }
 }


void preEvidenceShownGame(){ // in this funtion is stored all the dialog prior up to saving the evidence
    //used variables 
    char llegarTarde; 
    char pickUpEvidence; 
    char victorPresentation;
    char victorOption, confirm;
    int optionEvidencia;


    // Byron hacer void de pedir nombre 
    Jugador miJugador;
    pedirNombre(miJugador);
    cout << "Hola, " << miJugador.nombreJugador<<"!"<<endl;
    cout << "Ingresa tu nombre"; //hacer un cin en donde se guarde el nombre del usuario en la variable nombreJugador del Struct: Jugador
    txtDialogFall.showLongDialog(); /*Insertar nombre de usuario de la clase jugador*/ 
    cout << whyArriveLate.character << whyArriveLate.characterDialog;

    // Byron hacer su propio void 
    while (true){ //esto necesitamos hacerlo en un nuevo archivo, para solo llamarlo que corra en juego.cpp . 
        cout << "\n\n a.)  Mi alarma no sono \n b.) Dile la verdad \n c.) Mi perro se murio \n ";
        cin >> llegarTarde;
        llegarTarde = tolower(llegarTarde); //makes any input lowercase
            if (llegarTarde =='a' || llegarTarde == 'c'){
                cout << llegarTardeA.character << llegarTardeA.characterDialog;
                break; 
            } 
            else if (llegarTarde == 'b'){
            cout << llegarTardeB.character << llegarTardeB.characterDialog;
            break;
            }
            else{
            cout << "Por favor, escoje una de las opcciones previamente mencionadas\n\n"; 
            }
    }

evelynTakeArchive.showLongDialog(); //keeps the diaglog ongoign

//Byron hacer void 
    while (true){
    cin >> pickUpEvidence;
        if (pickUpEvidence == 'x'){
            //make something to store Victor files onto "portafolio"
            victorInformation.showLongDialog();// shows Victor Charges file 
            break;
        }
        else{
            cout << "Por favor, presione ''x'' para seguir ";
        }
    }

refleccionAfterReadingFile.showLongDialog(); //Shows the user reflecting about just reading the files
youHave2hrs.showShortDialog(); //more dialog of Evelyn
looking4Victor.showLongDialog(); // this dialog shows the user looking for our client Victor



victorRegretful.showLongDialog(); //this dialog shows how Regretful is Victor for the accused crimes he has commited


//Steven currelty working on it
askVictorsLife();   //Here the funtion of how Victor ended up in Jail will go



 cout << "Usuario: "<< endl;
 cout << "  Ya que tocamos el tema de los cargos... Creo que es hora que hablemos de ellos"<<endl;

 cout << "Victor: "<< endl;
 cout << "  Si... creo que tienes razon " /*nombre del usuario*/ << ". \n   Dime, de que cargos estoy siento inputado."<< endl;
 
HistoriaCase1.showLongDialog(); 
cout << "\nVictor: ";

menuEvidence(); //with this funtion, the user sees all the evidence and its dialog given by Victor

}


 
