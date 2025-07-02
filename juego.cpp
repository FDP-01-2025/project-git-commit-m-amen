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


//Steven curretly working on it
cout << "Como te le presentarias a Victor? \n a). Buena Manera \n b). Ir al grano ";
cin >> victorPresentation; 
victorPresentation = tolower(victorPresentation);
    //On this loop, the user decides on how they will present themselves to victor, ether compasionate or agresive
    if (victorPresentation == 'a'){  
       victorPresentationA.showLongDialog();
    }else if (victorPresentation == 'b'){
     victorPresentationB.showLongDialog();
    } else{
        cout << "Por favor, escoge la una de las respuestas proporcionadas";
      }

victorRegretful.showLongDialog(); //this dialog shows how Regretful is Victor for the accused crimes he has commited


//Steven currelty working on it
cout << "Que te gustaria preguntarle a Victor Primero?\n";
cout << " a). ¿Como fue tu infancia?\n b). ¿Como hiciste a la craitura?\n c). ¿Como terminaste en la carcel en si?"<< endl;
cin >> victorOption;
victorOption = tolower(victorOption);

if (victorOption == 'a'){
    victorChildhodd.showLongDialog();
} else if (victorOption == 'b'){
    victorMakingofCreature.showLongDialog();
} else if (victorOption == 'c'){
    victorHowCarcel.showLongDialog();
}else{
    cout << "Por favor, escoge la una de las respuestas proporcionadas";
}

 cout << "Usuario: "<< endl;
 cout << "  Ya que tocamos el tema de los cargos... Creo que es hora que hablemos de ellos"<<endl;

 cout << "Victor: "<< endl;
 cout << "  Si... creo que tienes razon " /*nombre del usuario*/ << ". \n   Dime, de que cargos estoy siento inputado."<< endl;
 
HistoriaCase1.showLongDialog(); 
cout << "\nVictor: ";
do{ // me agrada mucho la idea, pero me gustaria que en vez de preguntarle de un solo si quiere usar la evidencia, que le deje revisar toda la evidencia y despues que escoga volverla a ver o escogerla
cout << "Cual Evidencia quieres escuchar?  \n";
cin >> optionEvidencia;


//Esperando el commit de carlos
switch (optionEvidencia){
case 1:
    cout << C1E1.nombreEvidencia << endl;
    C1E1.imprimir();
    
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 2:
    cout << C1E2.nombreEvidencia << endl;
    C1E2.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 3: 
    cout << C1E3.nombreEvidencia << endl; 
     C1E3.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;     
    break;

case 4: 
     C1E4.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;     
    break;

case 5:
     C1E5.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 6:
     C1E6.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

    
}


}
    while (confirm != 's' && confirm != 'S'); // Para reemplazar el &&, se puede usar el 'to.LowerCase' method para que lo haga minuscula sin
                                              // importar el output

}




/*
void envidenciaChoose(){
    const int totalTimeCase1 =  14; //This is the time that the user has to choose the evidence
    int availableTimeCase1 = totalTimeCase1;
    vector<Evidencia> chosenEvidence;
    vector <Evidencia> case1Evidencie = {C1E1,C1E2, C1E3, C1E4, C1E5,  C1E6};

    //shown all evidence

    cout << "Selecciona 4 evidencias para "; 
}*/
 void askVictorsLife (){  // for this function we will stored the loop on how Victor ended up in Jail
    char Opiton; 
    bool askedA = false, askedB = false, askedC = false;

    while (!(askedA && askedB && askedC))
    {
       cout << "Que te gustaria saber de Victor primero?\n";
       if (!askedA) cout << "\na).Cuentame un poco de tu infancia\n";
       if (!askedB) cout << "b).Cuentame Victor, Como hiciste la creatura\n";
       if (!askedC) cout << "c). Como terminaste en la carcel?\n ";
       cin >> Opiton;
       Opiton = tolower(Opiton);

    }
    




 }
